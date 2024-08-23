from flask import Flask, render_template, request, redirect, url_for # This will import the Flask class from the flask module
from flask import send_from_directory # This will import the send_from_directory function from the flask module
from werkzeug.utils import secure_filename # Import the secure_filename function from the werkzeug.utils module
from flask_httpauth import HTTPTokenAuth # Import the HTTPTokenAuth module
from flask_cors import CORS # This will import the CORS class from the flask_cors module
import sqlite3 # Importing the sqlite3 module
import pandas as pd # Importing the pandas module

"""
Database connection helper function
"""
def connectToDb():
    conn = sqlite3.connect('mydb.db') # connect to the database
    with open('initscript.sql', 'r') as sql_file: # open the initscript.sql file
        conn.executescript(sql_file.read()) # execute the script on the connection
    return conn # return the connection

"""
Instantiate the Flask app
"""
print(__name__) # print __main__ in the console
app = Flask(__name__) # create a Flask object
CORS(app) # enable CORS for the app


"""
This function will allow me to serve images from a custom 'assets' directory
"""
@app.route('/assets/<path:filename>') # create a route for the app
def custom_static(filename): # create a function to serve images from the 'assets' directory
    return send_from_directory('assets', filename) # return the image from the 'assets' directory


"""
This function will render the index.html template
@return rendered index.html page
"""
@app.route('/', methods=['GET']) # create a GET route for the app
def root():
    return render_template('index.html', title='Home') # render the index.html template and return it

"""
This function will render the product-data-entry.html template
@return rendered product-data-entry.html page
"""
@app.route('/product-data-entry', methods=['GET']) # create a GET route for the app
def product_data_entry():
    return render_template('product-data-entry.html', title='Product Data Entry') # render the product-data-entry.html template and return it

"""
This function handles the post request to submit product data
@return redirect to the root route (index.html)
"""
@app.route('/submit-product-data', methods=['POST']) # create a POST route for the app
def submit_product_data():
    category = request.form.get('category') # get category data from the form
    prod_desc = request.form.get('prod_desc')  # get prod_desc data from the form
    price = request.form.get('price') # get price data from the form
    code = request.form.get('code') # get code data from the form
    with connectToDb() as con: # connect to the database
        con.execute('INSERT INTO product_data (category, prod_desc, price, code) VALUES (?, ?, ?, ?)',
                    (category, prod_desc, price, code)) # insert the data into the database
        con.commit() # commit the transaction
    return redirect(url_for('root')) # redirect to the root route (index.html)

"""
This function will render the retrieve-data-from-database.html template
@return rendered retrieve-data-from-database.html page
"""
@app.route('/retrieve-data-from-database', methods=['GET']) # create a GET route for the app
def retrieve_data_from_database():
    return render_template('retrieve-data-from-database.html', title='Retrieve Data From Database') # render the retrieve-data-from-database.html template and return it

"""
This function handles the get request to retrieve data from the database
@return rendered display-products.html page
"""
@app.route('/retrieve-data', methods=['GET']) # create a GET route for the app
def retrieve_data():
    category = request.args.get('category') # get category data from the query string
    with connectToDb() as con: # connect to the database
        if category: # if category field is not empty
            query = "SELECT id, category, prod_desc, price, code FROM product_data WHERE category = ?" # select data from the database where category is equal to the category field
            df = pd.read_sql(query, con, params=(category,)) # read the data from the database
        else:
            query = "SELECT id, category, prod_desc, price, code FROM product_data" # select all data from the database
            df = pd.read_sql(query, con) # read the data from the database
        print(df.to_dict('records'))  # Debug output

    return render_template('display-products.html', products=df.to_dict('records')) # render the display-products.html template and return it

"""
Run the app on port 8080
"""
if __name__ == '__main__': # This will check if the script is being run directly
    app.run(debug=True, port=8080) # This will run the app on port 8080
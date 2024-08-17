from flask import Flask, render_template, request # Importing the Flask module
import sqlite3 # Importing the sqlite3 module
import pandas as pd # Importing the pandas module

""" 
Helper Function
"""
def connectToDb(): # Define a function to connect to the database
    return sqlite3.connect("mydb.db") # Connect to the database


app = Flask(__name__) # Create a Flask app

"""
POST data to sqlite3 database and GET data from sqlite3 database using pandas
"""
@app.route("/", methods=["GET", "POST"]) # Define a route
def root(): # Define a function
    with connectToDb() as con: # Connect to the database
        if request.method == "POST": # If the request method is POST
            id = request.form.get("id") # Get the id from the form
            name_first = request.form.get("name_first") # Get the name_first from the form
            name_last = request.form.get("name_last") # Get the name_last from the form
            dob = request.form.get("dob") # Get the dob from the form
            con.execute("INSERT INTO person(id, name_first, name_last, dob) VALUES (?, ?, ?, ?)",
                        (id, name_first, name_last, dob)) # Insert the data into the database
            con.commit()  # Commit the transaction to the database

        df = pd.read_sql("SELECT * FROM person", con) # Read the data from the database
        print(df) # Print the data
        return render_template("root.html", title="Example", data=df.to_records()) # Render the template

        
app.run(debug=True) # Run the app on port 5000
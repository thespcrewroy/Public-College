from flask import Flask # to create the web application
from flask import render_template # to render html file template
from flask import request # to get the data from the html form
from flask_cors import CORS # This will import the CORS class from the flask_cors module

"""
Instantiate the Flask app
"""
app = Flask(__name__, template_folder='template') # create a Flask object and specify the template folder


"""
This function will render the home page
@return rendered index.html page
"""
@app.route('/', methods=['GET']) # create a GET route for the app
def root(): # create a function called root
    return render_template('index.html') # render the index.html template and return it

"""
Display:
* The original input value with the unit of measurement
* The converted value with the new unit of measurement
* Ex. “32 deg F is 0 deg C”).
"""
@app.route('/Conversion', methods=['POST','GET']) # route to the conversion page
def convert(): # function to return the conversion page
    conversion = '' # initialize the conversion variable
    if request.method == 'POST': # if the request method is POST
        temperature = request.form.get('temperature') # get the value from the form input with label 'temperature'
        conversion_type = request.form.get('conversion_type') # get the value from the dropdown with label 'conversion_type'

        if not temperature or not conversion_type: # If no temperature or conversion type is provided
            return render_template('index.html') # render the landing page again
        
        if conversion_type == 'centigrade': # if the value is in centigrade
            converted_temperature = (float(temperature) - 32) * 5.0 / 9.0 # convert the temperature to fahrenheit
            conversion = f"{temperature}°F is {converted_temperature:.2f}°C" # print and round the converted temperature to 2 decimal places
        elif conversion_type == 'fahrenheit': # if the value is in fahrenheit
            converted_temperature = (float(temperature) * 9.0 / 5.0) + 32 # convert the temperature to centigrade
            conversion = f"{temperature}°C is {converted_temperature:.2f}°F" # print and round the converted temperature to 2 decimal places

        return render_template('index.html', conversion = conversion) # render the converted value
    return render_template('index.html') # render the home page


"""
Run the app on port 8080
"""
if __name__ == '__main__': # This will check if the script is being run directly
    app.run(debug=True, port=8080) # This will run the app on port 8080
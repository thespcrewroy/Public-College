# Flask Libraries
from flask import Flask # Import the Flask class from the flask module
from flask_cors import CORS # Import the CORS class from the flask_cors module
from flask import request # Import the request object from the flask module
from flask import render_template # Import the render_template function from the flask module

# Python Libraries
import joblib # Import the joblib module
import pandas as pd # Import the pandas module

'''
Instantiate the Flask app
'''
print(__name__) # print __name__ to the console
app = Flask(__name__, template_folder='template') # Create an instance of the Flask class
CORS(app) # Allow Cross-Origin Resource Sharing (CORS) for the app
loaded_pipeline = joblib.load('model.pkl') # Load the saved model from the model.pkl file

'''
Root URL contains the interface for the clients to feed input and see predictions.
* Prediction returns once the client pressess 'submit' button
* Warning and wait for correct inputs if the client does not enter in correct format

@return index.html
'''
@app.route('/', methods=['GET']) # When the root URL is requested with a GET request
def root():
    return render_template('index.html', title='Home') # Render the index.html template

'''
Backend API to predict the class of the input value:
* Gather inputs from the client
* Load saved model for predictions
* Predict the class based on the inputs

@return prediction - the predicted class
'''
@app.route ('/Prediction', methods=['POST', 'GET']) # When the /Prediction URL is requested with a POST or GET request
def predict():
    if request.method == 'POST': # If the request method is POST
        try:
            # Get values after post request
            group_value = request.form.get('groupvalue') # Get the group value from the form input
            test_value = request.form.get('testvalue') # Get the test value from the form input
            
            # Warnings
            if not group_value or test_value == "":  # Check if group_value is None or test_value is an empty string
                raise ValueError("Please enter a value for both group and test value")
            
            test_value = float(test_value) # Convert the test value to a float
            if not (-3.00 <= test_value <= 2.00): # If the test value is not between -3.00 and 2.00
                raise ValueError("Test value out of range. Must be between -3.00 and 2.00") # Raise a ValueError
            
            if group_value not in ['A', 'B', 'C']: # If the group value is not 'A' or 'B' or 'C'
                raise ValueError("Group value must be either 'A' or 'B' or 'C'") # Raise a ValueError

            # Create a new dataframe with the input values
            input_data = pd.DataFrame({
                'Test': [test_value],
                'Group': [group_value]
            })

            # Predictions
            new_predictions = loaded_pipeline.predict(input_data) # Predict the class of the input data

            # Return the prediction value
            return render_template('index.html', prediction = new_predictions[0]) # Render the prediction value in the home page
        except ValueError as ve: # Handle ValueError exceptions
            return render_template('index.html', prediction=f"Error: {str(ve)}") # Render the error message
        except Exception as e: # Handle any other exceptions
            return render_template('index.html', prediction=f"Error: {str(e)}") # Render the error message
    return render_template('index.html') # Render the home page

'''
Run the app on port 8080
'''
if __name__ == '__main__': # If the script is being run directly on the command line
    app.run(debug=True, port=8080) # Run the app on port 8080 in debug mode
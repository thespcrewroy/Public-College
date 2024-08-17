from flask import Flask, request, render_template # Import the Flask Library
from werkzeug.utils import secure_filename # Import the secure_filename function from the werkzeug.utils module
from flask_cors import CORS # Import the CORS module
from flask_httpauth import HTTPTokenAuth # Import the HTTPTokenAuth module

"""
This is a simple Flask application that demonstrates how to create routes and handle requests.
"""
print(__name__) # This will print __main__ in the console
app = Flask(__name__, template_folder="templates") # Create an instance of the Flask class

CORS(app) # Enable CORS for the Flask application

"""
This function handles the /login route and returns a token.
@returns A string containing the token.
"""
auth_tk = HTTPTokenAuth() # Create an instance of the HTTPTokenAuth class
@auth_tk.verify_token # Define the function that will be executed when the token is verified
def verify_token(t): # Define the function that will be executed when the token is verified
    if t == "": # If the search query token is empty
        t = request.args.get("apikey", "") # Get the API key from the request
    if t == "1234": # If the apikey provided in the search query is 1234
        return "user" # Allow access
    return None # Else return None

"""
This function handles the root route ("/") and returns a greeting message.
@returns A string containing the greeting message.
"""
@app.route("/", methods=["GET"]) # Define the route for the main page
def root(): # Define the function that will be executed when the route is accessed
    return "Hello, Flask" # Return the string "Hello, Flask"

"""
This function handles the /path/<value> route and returns the value provided in the URL.
@param value: A string value that you query into the URL.
@returns the string value provided in the URL.
"""
@app.route("/path/<int:value>", methods=['GET']) # Define the route for the /path/<value> page
def fun(value): # Define the function that will be executed when the route is accessed
    return f"The value is {value}" # Return the string "The value is <value>"

"""
This function handles the /getexample route and returns the value provided in the URL.
@returns A string containing the value provided in the URL.
"""
@app.route("/getexample", methods=["GET"]) # Define the route for the /getexample page
@auth_tk.login_required # Require the user to be authenticated
def getexample(): # Define the function that will be executed when the route is accessed
    return f"You provided: {request.args.get('var','nothing')}" # Return the string "You provided: <value>"

"""
This function handles the /form route and returns the HTML form.
@returns The HTML form.
"""
@app.route("/form", methods=["GET"]) # Define the route for the /form page
def getform(): # Define the function that will be executed when the route is accessed
    return render_template("myform.html", title="My Form") # Return the HTML form

"""
This function handles the /postform route and returns the value provided in the form.
@returns A string containing the value provided in the form.
"""
@app.route("/postform", methods=["POST"]) # Define the route for the /postform page
def postexample(): # Define the function that will be executed when the route is accessed
    f = request.files.get("file1", None) # Get the file from the request
    if f: # If the file exists
        f.save(f"uploads/{secure_filename(f.filename)}") # Save the file to the uploads folder
    return f"You provided: {request.form.get('var','nothing')}" # Return the string "You provided: <value>"

if __name__ == "__main__": # If the script is executed directly (not being imported)
    app.run(debug=True, port=8080) # Run the Flask application on port 8080
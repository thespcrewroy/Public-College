
# import the class Flask
from flask import Flask # Flask is a class that is used to create a Flask object

# instantiate the object Flask with the name app (can be any name but 'app' is a tradition)
app = Flask(__name__) # __name__ is a special variable in Python that is the name of the module

@app.route('/') # this is the URL that the user will go to in the browser
def greeting(): # this is the function that will be executed when the user goes to the URL http://
    return "Hello DATA3190 course students" # this is the message that will be shown in the browser


app.run(debug = True) # if there are any errors, they will be shown in the browser
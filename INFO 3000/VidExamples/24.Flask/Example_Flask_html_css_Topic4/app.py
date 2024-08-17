from flask import Flask # to create the web application
from flask import render_template # to render html file template
from flask import request # to get the data from the html form

app = Flask(__name__) # instantiate the Flask app and assign to the variable 'app'


@app.route('/') # route to the home page
def home(): # function to return the home page
    return render_template('indexpage.html') # render the html file 'indexpage.html'

@app.route('/Prediction', methods=['POST','GET']) # route to the prediction page
def predict(): # function to return the prediction page
    if request.method == 'POST': # if the request method is POST
        measurement = request.form.get('testvalue') # get the value from the form input with label 'testvalue'
        if int(measurement) > 5: # if the value is greater than 5
            prediction = 'Abnormal' # assign the prediction as 'Abnormal'
        else: # if the value is less than or equal to 5
            prediction = 'Normal' # assign the prediction as 'Normal'
        return render_template('indexpage.html', prediction = prediction) # render the prediction value in the home page
    return render_template('indexpage.html') # render the home page

app.run(debug=True) # run the app in debug mode
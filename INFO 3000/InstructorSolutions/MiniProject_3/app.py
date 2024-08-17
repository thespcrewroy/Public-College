from flask import Flask
from flask import request
from flask import render_template
import joblib
import pandas as pd

app = Flask(__name__)

# Load the trained model
model = joblib.load('model.pkl')

@app.route('/')
def home():
    return render_template('base.html')

@app.route('/predict', methods=['POST'])
def predict():
    feature1 = request.form.get('feature1', None)
    feature2 = request.form.get('feature2', None)

    if feature1 == '':
        feature1 = None
    else:
        try:
            feature1 = float(feature1)
        except ValueError:
            feature1 = None

    if feature2 == '':
        feature2 = None

    input_data = pd.DataFrame([[feature1, feature2]], columns=['Test', 'Group'])
    prediction = model.predict(input_data)
    return render_template('base.html', prediction_text=f'Prediction: {int(prediction[0])}')

if __name__ == '__main__':
    app.run(debug=True, port=8080)

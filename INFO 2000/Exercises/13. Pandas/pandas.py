import pandas as pd
import csv

# Gather all information about dataset
data = pd.read_csv('weather_data.csv')

# Remove all columns having 60% or more missing values
data = data.dropna(thresh=0.6*len(data), axis=1)

# Remove all rows which have missing values
data = data.dropna()

# Drop all columns which have teh word 'smoothed in their column names
data = data.drop(data.columns[data.columns.str.contains('smoothed')], axis=1)

# Convert date to datetime datatype and set it as index
data['date'] = pd.to_datetime(data['date'])

# Check and confirm that there are no missing values in resultant dataset
print(data.isnull().sum())
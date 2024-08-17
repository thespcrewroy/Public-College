# Swapnil Roy
# This program plots precipitation levels in Athens GA, between 2000 and 2010

import pandas as pd
import matplotlib.pyplot as plt
import seaborn as sns

# Read the CSV file into a DataFrame
df = pd.read_csv('data.csv', parse_dates=['DATE'])

# Set the date column as the index
df.set_index('DATE', inplace=True)

# Resample the data to a daily sum
daily_data = df.resample('D').sum()

# Resample the data to a monthly average
monthly_data = df['HPCP'].resample('M').mean()

# Use Seaborn to create a line plot
sns.lineplot(data=monthly_data)
plt.xlabel('Data')
plt.ylabel('Precipitation (inches)')
plt.title('Athens, GA Rain Gauge')

# Save the figure
plt.savefig('athens_rain_gauge.png', dpi=300, bbox_inches='tight')
plt.show()

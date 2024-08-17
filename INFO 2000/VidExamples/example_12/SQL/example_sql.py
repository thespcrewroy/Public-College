import sqlite3 # Import the sqlite3 module
import os # Import the os module
import pandas as pd # Import the pandas module

"""
Removes the database for recreation
"""
os.remove("mydb.db") # Remove the database file


with sqlite3.connect("mydb.db") as con: # Connect to the database

    """
    Initialization script: something only to run once when creating the database
    """
    with open("initscript.sql") as f: # Open the script
        con.executescript(f.read()) # Execute the script
    print("\n")

    """
    Insert data into the database
    """    
    to_insert = [("A", "LA", 1, "2000-01-03"),
                 ("B", "LB", 2, "2000-01-04")]
    con.executemany("INSERT INTO person VALUES (?, ?, ?, ?)", to_insert) # Insert the data
    con.execute("INSERT INTO person (name_first,id,dob) VALUES (:name,:id,:dob)",
                {"name": "C", "id": 3, "dob": "2000-04-01"})
    print("\n")
    
    """
    Fetch data from database with pandas
    """
    df = pd.read_sql("SELECT * FROM person", con) # Read the data from the database
    print(df) # Print the data
    df = pd.read_sql("SELECT name_first, name_last FROM person WHERE dob > ?", con, params=('2000-01-03',)) # Read the data from the database
    print(df) # Print the data
    print("\n")


    """
    Other ways to fetch data from the database
    """
    print(con.execute("SELECT * FROM person").fetchall()) # Fetch data without pandas (no column names)
    print("\n")
    print(pd.DataFrame(con.execute("SELECT * FROM person").fetchall())) # Fetch data with pandas a different way (no column names)

    """
    Update data in the database
    """
    print("\n") # Print a newline
    con.execute("UPDATE person SET name_last=:ln WHERE id=:id", {"ln": "LC", "id": 3}) # Update the data
    df = pd.read_sql("SELECT * FROM person", con) # Read the data from the database
    print(df) # Print the data

    """
    Delete data in the database
    """
    print("\n") # Print a newline
    con.execute("DELETE FROM person WHERE id=?",(2,)) # Delete the data
    df = pd.read_sql("SELECT * FROM person", con) # Read the data from the database
    print(df) # Print the data
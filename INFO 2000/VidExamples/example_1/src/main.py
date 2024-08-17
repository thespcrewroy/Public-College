# This program is an example
import time
import os
num_files = len(os.listdir("data"))
file = open("res/time.txt", "w")
file.write(f"The program was last run at {time.ctime()}\n")
file.write(f"There are {num_files} in the data folder")

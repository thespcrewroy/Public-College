import matplotlib.pyplot as plt
import numpy as np

'''
Create one bar chart
'''
fig,ax = plt.subplots() # create a figure and axis object to draw on
# ax.bar([1,2,3,4], [3,2,1,-3]) # create a bar chart with 4 bars
# ax.plot([0,5],[0,0],"k") # plot a black line at y=0 to delineate the x-axis
# plt.show() # display the plot and wait for user to close it

'''
Create two vertical bar charts
'''
x_locs = np.array([1,2,3,4]) # create a list of x values for the bars
bar_width = .3 # set the width of the bars
bar_sep = .1 # set the separation between the bars

y1_heights = np.array([3,2,1,-3]) # create a list of y values for the first set of bars
y2_heaight = np.array([1,2,3,4]) # create a list of y values for the second set of bars

ax.bar(x_locs-bar_width/2-bar_sep, 
       y1_heights, 
       width=bar_width, 
       facecolor="r",
       label="Red") # create the first set of bars
ax.bar(x_locs+bar_width/2+bar_sep, 
       y2_heaight, 
       width=bar_width, 
       facecolor="b",
       label="Black") # create the second set of bars
ax.set(xticks=x_locs, 
       xticklabels=["A","B","C","D"], 
       xlabel="categories", 
       ylabel="values",) # set the x-axis tick locations and labels, and the x and y axis labels
ax.legend() # display the legend
fig.savefig("charts.png", dpi=100, bbox_inches="tight") # save the figure to a file for printing
# plt.show() # display the plot and wait for user to close it

'''
Create a horizontal bar chart
'''
# ax.barh([1,2],[3,4]) # create a horizontal bar chaclrt with 2 bars
# ax.set(yticks=[1,2], 
#        yticklabels=["a very long string", "another one"]) # set the y-axis tick locations and labels
# plt.tight_layout() # automatically adjust subplot parameters to give specified padding
# plt.show()  # display the plot and wait for user to close it
import matplotlib.pyplot as plt
import numpy as np

'''
# Plot sin(x) over -2pi to 2pi
* linspace - produces a list of evenly spaced numbers over a specified interval (start, stop, number of values)
* sin - calculates the sine of each value in the list
* plot - access to only higher level plotting graphics
* subplots - access to lower level plotting graphics
'''
x = np.linspace(-2*np.pi, 2*np.pi, 100) # create a list of x values for sin(x) graph
# y = np.sin(x) # create a list of y values for sin(x) graph

# plt.plot(x, y) # plot sin(x) values (for higher level graphics)
fig,ax = plt.subplots() # create a figure and axis object to draw on
ax.plot(x, np.sin(x), "r--*") # plot 100 sin(x) values on a line object for red dashed lines with stars
ax.plot(x, np.sin(x), "b*") # layer 100 sin(x) values over the previous line object for blue stars
ax.plot(x , np.cos(x), "b--") # plot 100 cos(x) values on a line object for blue dashed lines
fig.suptitle("$\sin(x)$ and $\cos(x)$ over $-2\pi$ to $2\pi$")  # set the title of the figure
plt.show() # display the plot and wait for user to close it

'''
# Plot sin(x) over 0 to pi (limit plotting)
'''
# ax.set(xlim=[0,np.pi], ylim=[0,1])  # set the x and y limits of the plot
# ax.set(title="Sin(x)", xlabel="time") # set the title and x-axis label of the plot
# fig.suptitle("A figure title") # set the title of the figure
# plt.show() # display the plot and wait for user to close it
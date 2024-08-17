# __all__ = ["projectile_range"] # Uses a dunder to make varaibles/methods private
_gravity = 9.81 # Underscore prefix is another way to keep varaibles/functions private
def projectile_range(velocity):
    return 2*velocity[0]*velocity[1]/_gravity

# Special varaible __name__ is defined by python
# If that Special name is main, then it is run
# Thus, if is imported, then it will not run
if __name__ == "__main__":
    # Tests
    print(projectile_range([10,10]))
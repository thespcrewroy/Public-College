A = [1 2 1; 1 5 2; 1 7 3; 1 8 4]
b = [1; 2; 2; 1]

nec1 = A' * A
nec2 = A' * b
U = [nec1 nec2]
rref(U)
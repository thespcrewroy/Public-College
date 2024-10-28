format rat;

disp('Problem 4')
A = [2 6; -5 9]
A(2,:) = -5*A(1,:) + A(2,:)
A(2,:) = (1/16)*A(2,:)
A(1,:) = -3*A(2,:) + A(1,:)

disp('Problem 5')
A = [9 -2; -7 -7]
A = inv(A)
B = [3; -1]
A * B

disp('Problem 6')
A = [-2 -2 -7; -2 -1 -5; 1 1 4]
A = inv(A)
B = [5; 5; 3]
A * B

disp('Problem 7')
A = [9 -5 3; 0 7 6; 0 0 7]
inv(A)

disp('Problem 8')
A = [6 0 0; 0 -2 0; 0 0 -4]
inv(A)

disp('Problem 10')
A = [-1 1 3; 1 -2 -3; 3 -3 -6]
inv(A)

disp('Problem 11')
A = [-5 5; -1 -5]
rref(A)

A = [1 -1; -4 -1]
rref(A)

A = [-1 9; 1 -9]
rref(A)

disp('Problem 12')
A = [1 -4 -1; 0 1 8; 0 0 1]
inv(A)

disp('Problem 15')
A = [-4 -5; -8 7]
rref(A)
inv(A)

disp('Problem 16')
A = [2 7; 5 17]
rref(A)
inv(A)

disp('Problem 17')
A = [2 -5 1; -1 1 -1; 1 -3 0]
rref(A)
inv(A)

disp('Problem 18')
A = [6 -3; 4 0]
A(2,:) = (-4/6)*A(1,:) + A(2,:)

disp('Problem 19')
A = [0 0 1 0; 0 0 0 1; 0 1 0 0; 1 0 0 0]
inv(A)

disp('Problem 20')
A = [-1 -1 0 0; 0 -1 0 0; 0 0 -1 -5; 0 0 5 26]
inv(A)

disp('Problem 21')
A = [5 1; -2 9]
A = inv(A)
B_1 = [-1; 3]
B_2 = [-2; -3]
Sol_1 = A * B_1
Sol_2 = A * B_2
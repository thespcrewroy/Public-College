disp('Problem 1')
A = [5 2 2 0; -7 -4 -8 0; 9 0 14 0]

disp('Problem 2')
A = [-1 5 0; -1 0 0]
rref(A)
A(2,:) = -1*A(1,:) + A(2,:);
A(2,:) = (-1/5)*A(2,:);
A(1,:) = -5*A(2,:) + A(1,:);
A(1,:) = -1*A(1,:)

disp('Problem 11')
A = [-2 6 16; -2 7 17; -5 18 43]
rref(A)

disp('Problem 12')
B = [-2 5 -12; -5 -6 7; 19 45 -71]
rref(B)

disp('Problem 13')
A = [4 -5 -5 5; 5 -2 -6 27; -5 5 4 -8]
rref(A)

disp('Problem 14')
A = [1 3 5 4; 0 1 -2 3; 2 7 8 11]
rref(A)
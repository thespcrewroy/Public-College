disp('Problem 1')
A = [3 3; 3 4]
A(2,:) = -A(1,:) + A(2,:)

disp('Problem 2')
A = [-5 3 5; 10 -1 -9]
A(2,:) = 2*A(1,:) + A(2,:)

disp('Problem 3')
A = [3 -1; 6 -5; 9 -12]
[L, U] = lu(A)
% Display the results
disp('Matrix L:');
disp(L);

disp('Problem 4')
A = [-4 -1 4; 8 7 -7; 16 -16 -25]
A(2,:) = 2*A(1,:) + A(2,:)
A(3,:) = 4*A(1,:) + A(3,:)
A(3,:) = 4*A(2,:) + A(3,:)

disp('Problem 5')
A = [-4 -1; 4 -3]
b = [11; 1]
[L, U] = lu(A)
forward = rref([L b])
rref([U forward(:,3)])

disp('Problem 5')
A = [2 5 2; 4 8 2; -10 -27 -10]
b = [-9; -16; 51]
[L, U] = lu(A)
forward = rref([L b])
rref([U forward(:,4)])

disp('Problem 6')
A = [4 4 5 -1; -8 --4 -6 -1; -4 0 0 -1]
[L, U] = lu(A)

disp('Problem 11')
A = [-1 2 1 4; -2 5 6 11; 5 -14 -26 -34; -3 3 -34 -10]
A(2,:) = -2*A(1,:) + A(2,:)
A(3,:) = 5*A(1,:) + A(3,:)
A(4,:) = -3*A(1,:) + A(4,:)
A(3,:) = 4*A(2,:) + A(3,:)
A(4,:) = 3*A(2,:) + A(4,:)
A(4,:) = -5*A(3,:) + A(4,:)
% b = [-21; -57; 174; 33]
% [L, U] = lu(A)
% forward = rref([L b])
% rref([U forward(:,5)])




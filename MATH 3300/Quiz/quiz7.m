A = [1 2 3 4; 2 4 5 7; 3 6 6 2; 4 1 1 3]
% A(2,:) = (-2)*A(1,:) + A(2,:)
% A(3,:) = (-3)*A(1,:) + A(3,:)
% A(4,:) = (-4)*A(1,:) + A(4,:)
% A = [1 2 3 4; 0 -7 -11 -13; 0 0 -3 -10; 0 0 -1 -1]
% A(4,:) = (-1/3)*A(3,:) + A(4,:)
rref(A)
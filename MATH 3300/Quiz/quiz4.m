disp('Problem 1')
A = [7 2 9 -3 0; -3 1 -6 2 0; 1 -9 12 -4 0]
rref(A)
A = [7 2 9 -3 0; -3 1 -6 2 0; 1 -9 12 -4 0]
A(2,:) = (3/7)*A(1,:) + A(2,:)
A(3,:) = (-1/7)*A(1,:) + A(3,:)
A(3,:) = (-A(3,2)/A(2,2))*A(2,:) + A(3,:)
A(2,:) = (1/A(2,2))*A(2,:)
A(1,:) = -2*A(2,:) + A(1,:)
A(1,:) = (1/7)*A(1,:)

disp('Problem 11')
A = [1 3 1; -1 -5 5; 4 7 1]
A(2,:) = A(1,:) + A(2,:)
A(3,:) = -4*A(1,:) + A(3,:)
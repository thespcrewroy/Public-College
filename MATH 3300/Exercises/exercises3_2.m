disp('3.2: Example 2 - Determinant After Elementary Row Operations Theorem + Diagonal Matrix Theorem')
A = [2 -8 6 8; 3 -9 5 10; -3 0 1 -2; 1 4 0 6]
A_interchanged = [A(4,:); A(2,:); A(3,:); A(1,:)]
A = A_interchanged;
A(2,:) = A(1,:)*-3 + A(2,:)
A(3,:) = A(1,:)*3 + A(3,:)
A(4,:) = A(1,:)*-2 + A(4,:)
A(3,:) = A(2,:)*(-A(3,2)/A(2,2)) + A(3,:)
A(4,:) = A(2,:)*(-A(4,2)/A(2,2)) + A(4,:)
A(4,:) = A(3,:)*(-A(4,3)/A(3,3)) + A(4,:)
disp('1 row interchange:')
determinant = (-1)*A(1,1)*A(2,2)*A(3,3)*A(4,4)

disp('3.2: Example 3 - Determinant is 0 if Dependent Matrix Theorem')
A = [3 -1 2 -5; 0 5 -3 -6; -6 7 -7 4; -5 8 0 9]
disp('This clearly evaluates to a dependent matrix after row reduction')
rref(A)
disp('Thus the determinant must be 0')
det(A)




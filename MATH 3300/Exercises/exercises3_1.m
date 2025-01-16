disp('3.1: Example 2 - Cofactor Expansion')
A = [1 5 0; 2 4 -1; 0 -2 0]
A31 = [A(1:2,1) A(1:2,3)]
cofactor1 = (-1)^(3 + 1) * A(3,1) % Evaluates to 0
cofactor2 = (-1)^(3 + 2) * A(3,2) * det(A31)
cofactor3 = (-1)^(3 + 3) * A(3,3) % Evaluates to 0
expansion = cofactor1 + cofactor2 + cofactor3


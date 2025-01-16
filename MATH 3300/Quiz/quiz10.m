disp('Problem 1')
A = [4 4 2 3 -2; 0 1 -2 -2 2; 6 12 11 2 -4; 9 20 10 10 -6; 15 28 14 5 -3]

format default;
[V, S] = eig(A);
disp('Eigenvalues')
disp(S);  % Display the diagonal matrix of eigenvalues
disp('Eigenvectors')
disp(V);  % Display the eigenvectors


format long;
disp('(A*v_1) = (λ*v_1)?')
A * V(:, 1)  % (A*v_1)
S(1, 1) * V(:, 1) % (λ*v_1)

disp('(A*v_2) = (λ*v_2)?')
A * V(:, 2)  % (A*v_2)
S(2, 2) * V(:, 2) % (λ*v_2)

disp('(A*v_3) = (λ*v_3)?')
A * V(:, 3)  % (A*v_3)
S(3, 3) * V(:, 3) % (λ*v_3)

disp('(A*v_4) = (λ*v_4)?')
A * V(:, 4)  % (A*v_4)
S(4, 4) * V(:, 4) % (λ*v_4)

disp('(A*v_5) = (λ*v_5)?')
A * V(:, 5)  % (A*v_5)
S(5, 5) * V(:, 5) % (λ*v_5)

disp('Linearly Independent?')
rank(V)  % Check the rank for linear independence
disp('Rank of 5 is equal to # of eigenvectors (columns in "V"). Linearly Independent.')

p = V;  % Store eigenvector matrix in 'P'
D = S;  % Store diagonal matrix in 'D'


format rat;  % Set format for rational display
disp('Diagonalized')
[A p*D*inv(p)]

format rat;  % Set format for rational display
disp('Original Matrix')
A  % Display the original matrix
disp('Diagonal matrix')
D
disp('Invertible matrix')
p
disp('Diagonalized Matrix (Same as "A")')
p * D * inv(p)  % Compute PDP^-1
disp('Should be close to 0')
A - p * D * inv(p)  % This should be a matrix close to zero

disp('A*p')
A*p
disp('p*D')
p*D
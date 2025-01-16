disp('5.3: Example 3')
disp('Matrix "A" ')
A = [1 3 3; -3 -5 -3; 3 3 1]  % Define the matrix A

format default;
[V, S] = eig(A);  % Compute eigenvectors (V) and eigenvalues (S)
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

disp('Linearly Independent?')
rank(V)  % Check the rank for linear independence
disp('Rank of 3 is equal to # of eigenvectors (columns in "V"). Linearly Independent.')

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
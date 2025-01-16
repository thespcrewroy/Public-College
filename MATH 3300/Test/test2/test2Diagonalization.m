disp('5.3: Test2 Diagonalization')
format rat;
disp('Matrix "A" ')
A = [4 1 0 0; 1 4 1 0; 0 1 4 1; 0 0 1 4]  % Define the matrix A

format default;
[V, S] = eig(A);  % Compute eigenvectors (V) and eigenvalues (S)
disp('Eigenvalues')
disp(S);  % Display the diagonal matrix of eigenvalues
disp('Eigenvectors')
disp(V);  % Display the eigenvectors

format long;
disp('Rank of 4 = 4 eigenvectors. Linearly Independent.')
rank(V)  % Check the rank for linear independence

p = V;  % Store eigenvectors matrix in 'P'
D = S;  % Store diagonal matrix in 'D'

format rat;  % Set format for rational display
disp('Diagonalized. A = PDP^-1')
[A p*D*inv(p)]

format long; % Set for up to 15 decimals
disp('A - PDP^-1: Should be close to 0')
A - p*D*inv(p)  % This should be a matrix close to zero

format long;  % Set format for rational display
disp("Original Matrix 'A'")
A  % Display the original matrix
disp("Diagonal matrix 'D'")
D
disp("Invertible matrix 'P'")
p
disp("Inverse of invertible matrix 'P^-1'")
inv(p)
disp('A*P')
A*p
disp('P*D')
p*D

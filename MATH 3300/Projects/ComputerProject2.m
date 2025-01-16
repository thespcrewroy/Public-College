% Set the format to rational
format rat;

disp('Problem 1')
A = [11 -6 4 -10 4; -3 5 -2 4 1; -8 12 -3 12 4; 1 6 -2 3 -1; 8 -18 8 -14 -1]

format rat; % set to format rat
[V, S] = eig(A);  % Compute eigenvectors (V) and eigenvalues (S)
disp('Eigenvalues') % Display the title 'Eigenvalues'
disp(S);  % Display the diagonal matrix of eigenvalues
disp('Eigenvectors') % Display the title 'Eigenvectors'
disp(V);  % Display the eigenvectors

format rat;
disp('Problem 2')
% Calculate U and save vectors for 'L'
B = [11 -6 4 -10 4; 8 -18 8 -14 -1; -8 12 -3 12 4; 1 6 -2 3 -1; -3 5 -2 4 1]
B_v1 = B(:,1);
B(2,:) = B(1,:)*(-B(2,1)/B(1,1)) + B(2,:);
B(3,:) = B(1,:)*(-B(3,1)/B(1,1)) + B(3,:);
B(4,:) = B(1,:)*(-B(4,1)/B(1,1)) + B(4,:);
B(5,:) = B(1,:)*(-B(5,1)/B(1,1)) + B(5,:);

B_v2 = B(2:5,2);
B(3,:) = B(2,:)*(-B(3,2)/B(2,2)) + B(3,:);
B(4,:) = B(2,:)*(-B(4,2)/B(2,2)) + B(4,:);
B(5,:) = B(2,:)*(-B(5,2)/B(2,2)) + B(5,:);

B_v3 = B(3:5,3);
B(4,:) = B(3,:)*(-B(4,3)/B(3,3)) + B(4,:);
B(5,:) = B(3,:)*(-B(5,3)/B(3,3)) + B(5,:);

B_v4 = B(4:5, 4);
B(5,:) = B(4,:)*(-B(5,4)/B(4,4)) + B(5,:);
U = B;

B_v5 = B(5,5);

% Scale
B_v1_scaled = B_v1 / B_v1(1,1);
B_v2_scaled = B_v2 / B_v2(1,1);
B_v3_scaled = B_v3 / B_v3(1,1);
B_v4_scaled = B_v4 / B_v4(1,1);
B_v5_scaled = B_v5 / B_v5(1,1);

% Add the zeroes to make it a 5x5 matrix in the end
B_v1_scaled = B_v1_scaled;
B_v2_scaled = [0; B_v2_scaled];
B_v3_scaled = [0; 0; B_v3_scaled];
B_v4_scaled = [0; 0; 0; B_v4_scaled];
B_v5_scaled = [0; 0; 0; 0; B_v5_scaled];
L = [B_v1_scaled B_v2_scaled B_v3_scaled B_v4_scaled B_v5_scaled];

% Show that LU is equal to B
L
U
disp('B = L*U')
B = L*U

disp('Problem 3')
B = [11 -6 4 -10 4; 8 -18 8 -14 -1; -8 12 -3 12 4; 1 6 -2 3 -1; -3 5 -2 4 1]

format default;
[V, S] = eig(B);  % Compute eigenvectors (V) and eigenvalues (S)
disp('Eigenvalues') % Display the title 'Eigenvalues'
disp(S);  % Display the diagonal matrix of eigenvalues
disp('Eigenvectors') % Display the title 'Eigenvectors'
disp(V);  % Display the eigenvectors


format long;
disp('(B*v_1) = (λ*v_1)')
B * V(:, 1)  % (A*v_1)
S(1, 1) * V(:, 1) % (λ*v_1)

disp('(A*v_2) = (λ*v_2)')
B * V(:, 2)  % (A*v_2)
S(2, 2) * V(:, 2) % (λ*v_2)

disp('(A*v_3) = (λ*v_3)')
B * V(:, 3)  % (A*v_3)
S(3, 3) * V(:, 3) % (λ*v_3)

disp('Linearly Independent: ')
disp('Rank of 5 is equal to # of eigenvectors (columns in "V")')
rank(V)  % Check the rank for linear independence

p = V;  % Store eigenvector matrix in 'P'
D = S;  % Store diagonal matrix in 'D'
C = B;

format long; % Set for up to 15 decimals
disp("Original Matrix 'B")
B
disp("Diagonal matrix 'D'")
D
disp("Invertible matrix 'P'")
p
disp("Inverse of invertible matrix 'P^-1'")
inv(p)

disp('A*P')
B*p
disp('P*D')
p*D

disp('Diagonalized. Should be the same C = PDP^-1')
[C p*D*inv(p)]
C = p*D*inv(p);

disp('B - PDP^-1: Should be close to 0')
norm(B - C)  % This should be a matrix close to zero


disp('Problem 4')
% Diagonalize the Penny
load penny % load the penny
Penny=P; % assign penny 'P' to 'Penny'
% figure, image(Penny) % display the 'Penny'
[P D]=eig(Penny); % Get the eigen value and eigen vectors of the image
norm(P*D*inv(P)- Penny) % do PDP^-1 and make sure it subtraction from 'P' is close to 0

% Get the SVD of the Penny
% load penny
% Penny=P;
% figure, subplot(121), image(Penny)
[U S V]=svd(Penny); % Calculate SVD
norm(U*S*V'  - Penny) % normalize
% subplot(122), image(U*S*V') % get the subplot

% Get the sizes of Penny
[m, n] = size(Penny);  % Original size of the image
[m_U, n_U] = size(U);  % Size of U
[m_S, n_S] = size(S);  % Size of S
[m_V, n_V] = size(V);  % Size of V

% Display sizes
disp(['Size of Penny: ', num2str(m), ' x ', num2str(n)]);
disp(['Size of U: ', num2str(m_U), ' x ', num2str(n_U)]);
disp(['Size of S: ', num2str(m_S), ' x ', num2str(n_S)]);
disp(['Size of V: ', num2str(m_V), ' x ', num2str(n_V)]);

% Compress the image
P1=U(:,1:30)*S(1:30,1:30)*(V(:,1:30)'); % Compression
figure, subplot(121), image(Penny) % Show the compressed penny
subplot(122), image(P1) % Get a subplot of the penny
error=norm(P1-Penny,inf) % show the std error



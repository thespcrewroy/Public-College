% Construct matrix A such that det(A) = 8
% We choose independent vectors
v1 = [2 0 0 0];   % Row 1
v2 = [0 2 0 0];   % Row 2
v3 = [0 0 1 0];   % Row 3
v4 = [0 0 0 2];   % Row 4

% Construct the matrix A
A = [v1; v2; v3; v4];
% Compute the determinant of the original matrix A
det_A = det(A);

% Verify that the determinant of the original matrix is 8
disp('The determinant of the original matrix is:');
disp(det_A);  % This should output 8

% New rows (linear combinations of rows 2 and 3)
new_row2 = 4 * v2 + 6 * v3;
new_row3 = 4 * v2 + 8 * v3;

% Construct the new matrix with modified rows
A_new = [v1; new_row2; new_row3; v4];

% Compute the determinant of the new matrix
det_A_new = det(A_new);

disp('The determinant of the new matrix is:');
disp(det_A_new);

disp('Problem 2');
% Define the size of the matrix
n = 4;

% Create the matrix A_4
A = zeros(n); % initialize a zero matrix
for i = 1:n % loop through the rows
    for j = 1:n % loop through the columns
        A(i,j) = 1 / (i + j + 1); % correctly fill the matrix according to the problem
    end % end for loop
end % end for loop
disp('Matrix A_4 is:');
disp(A);

inv_A4 = inv(A); % calculate the inverse
disp('The inverse of A_4 is:');
% Print the inverse matrix in matrix format
for i = 1:size(inv_A4, 1)
    fprintf('%.0f ', inv_A4(i, :)); % Print each row
    fprintf('\n'); % New line after each row
end

% Define the size of the 2nd matrix
n = 5;

% Create the matrix A_5
A = zeros(n); % initialize a zero matrix
for i = 1:n % loop through the rows
    for j = 1:n % loop through the columns
        A(i,j) = 1 / (i + j + 1); % correctly fill the matrix according to the problem
    end % end for loop
end % end for loop
disp('Matrix A_5 is:');
disp(A);

inv_A5 = inv(A); % calculate the inverse
disp('The inverse of A_5 is:');
% Print the inverse matrix in matrix format
for i = 1:size(inv_A5, 1)
    fprintf('%.0f ', inv_A5(i, :)); % Print each row
    fprintf('\n'); % New line after each row
end

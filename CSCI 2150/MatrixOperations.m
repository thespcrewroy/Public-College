% (A.1) Create the following 4X5 Matrix without entering individual elements
% directly "when possible”.
matrix = zeros(4, 5);
matrix(1, :) = [60, 55, 50, 45, 40];
matrix(2, :) = [10, 20, 30, 40, 50];
matrix(4, :) = [100, 99, 203, 33, 11];
disp('(A.1) Create a 4x5 Matrix.')
disp(matrix);

% (A.2) Extract the element 30 using linear indexing and row/column indexing
disp('(A.2) Extract element 30 using linear and row/column indexing')
fprintf('Element extracted using linear indexing: %d\n', matrix(10));
[x, y] = find(matrix == 30);
fprintf('Element extracted using row/column indexing: %d\n', [x, y]);
fprintf("\n");

% (A.3) Extract sub-matrix
% Extract the sub-matrix using row and column indices
sub_matrix = matrix(3:4, 2:3); 
disp('(A.3) Extract the highlighted sub-matrix');
disp(sub_matrix);

% (A.4) Replace zero elements with NaN
matrix(matrix == 0) = NaN;
disp('(A.4) Replace zero elements with NaN.');
disp(matrix);

% (A.5)Extract all elements from the matrix except the elements in the last row.
matrix = zeros(4, 5);
matrix(1, :) = [60, 55, 50, 45, 40];
matrix(2, :) = [10, 20, 30, 40, 50];
matrix(4, :) = [100, 99, 203, 33, 11];
row_indices = 1:size(matrix, 1) - 1; % returns an array of the number of rows and subtracts the last row
elements_except_last_row = matrix(row_indices, :); % converts the row vector back into the matrix
disp('(A.5) Extract all elements from the matrix except the elements in the last row.');
disp(elements_except_last_row)

% (A.6) Replace all elements in the third row with 5
matrix(3, :) = 5;
disp('(A.6) Replace all elements in the third row with the value 5.')
disp(matrix);

% (A.7) Delete the second column
matrix = zeros(4, 5);
matrix(1, :) = [60, 55, 50, 45, 40];
matrix(2, :) = [10, 20, 30, 40, 50];
matrix(4, :) = [100, 99, 203, 33, 11];
matrix(:, 2) = [];
disp('(A.7) Delete the second column')
disp(matrix);

% Replace element 50 with zero
matrix = zeros(4, 5);
matrix(1, :) = [60, 55, 50, 45, 40];
matrix(2, :) = [10, 20, 30, 40, 50];
matrix(4, :) = [100, 99, 203, 33, 11];
[x, y] = find(matrix == 50);
matrix(x, y) = 0;
fprintf('(A.8) Element 50 replaced with zero.\n');
disp(matrix);

% (A.9) Create a logical matrix to check the condition
logical_matrix = (matrix > 10) & (matrix < 100);
disp('(A.9) Create a logical matrix to check if each element is greater than 10 and less than 100')
disp(logical_matrix);


matOper(matrix, 5);
MatrixOperations(3);

matrix = zeros(4, 5);
matrix(1, :) = [60, 55, 50, 45, 40];
matrix(2, :) = [10, 20, 30, 40, 50];
matrix(4, :) = [100, 99, 203, 33, 11];

% (Section B) Create a function matOper
function matOper(mat, x)
    % Check the size of the matrix
    [rows, columns] = size(mat);

    if rows == columns
        % Matrix is square, calculate the product of diagonal elements
        diagonal = diag(mat); % Extract diagonal to make column vector of diagonal elements
        product = prod(diagonal); % Multiply the elements in the array together
        fprintf('(Section B) The product of the diagonal elements is: %d\n', product);
    else
        % Matrix is not square, make it square by inserting x
        if rows < columns
            % Add x as a new row
            mat(rows + 1, :) = x;
        else
            % Add x as a new column
            mat(:, columns + 1) = x;
        end

        % Display the updated matrix
        disp('(Section B) The matrix after inserting x:');
        disp(mat);
    end
end

% (Section C) Create a function MatrixOperations
function MatrixOperations(dim)
    disp('Section C');
    % Generate a random dim X dim matrix A
    A = rand(dim);

    % Determine and return the dimensions of A
    [rows, columns] = size(A);
    fprintf('Matrix A has dimensions %d x %d\n', rows, columns);

    % Check if A is a symmetric matrix
    isSymmetric = isequal(A, A');
    if isSymmetric
        fprintf('Matrix A is symmetric.\n');
    else
        fprintf('Matrix A is not symmetric.\n');
    end

    % Find the transpose of A
    A_transpose = A';
    disp('Transpose of A.')
    disp(A_transpose);

    % Find the determinant of A
    determinant_A = det(A);
    fprintf('Determinant of A is: %f\n', determinant_A);

    % Determine if A is singular or not
    if determinant_A == 0
        fprintf('Matrix A is singular (non-invertible).\n');
    else
        fprintf('Matrix A is not singular (invertible).\n');
    end
end



Workshet 09 Solution
Section A
% x = 2
% x + y = 3

A = [1 0 ; 1 1];
B = [2 ; 3];

[x] = linsolve(A , B)
[x] = inv(A)*B
[x] = A\B

Section B
%y = 3x -1
%4x + y = -8

A = [-3 1 ; 4 1];
B = [-1 ; -8];
[x] = linsolve(A,B)
[x] = inv(A)*B
[x] = A\B


 
%2x + y - 2z = 3
%x + y + 3z = 12
%x - y - z = 0

A = [2 1 -2; 1 1 3; 1 -1 -1];
B = [3 ; 12 ; 0];

[x] = A\B
[X] = linsolve(A,B)
[x] = inv(A)*B
   
%x + z + 2w = 6
%y = -3 + 2z
%x + 2y -z = -2
%2x + y + 3z - 2w = 0

A = [1 0 1 2 ; 0 1 -2 0 ; 1 2 -1 0 ; 2 1 3 -2];
B = [6 ; -3 ; -2 ; 0];

[x] = inv(A)*B
[x] = A\B
[x] = linsolve(A,B)

coefficients3 = [1, 2; -1, 3];
rightHandSide3 = [5; 4];
solveLinearSystem(coefficients3, rightHandSide3);

function solveLinearSystem(coefficients, rightHandSide)
    [numEquations, numUnknowns] = size(coefficients);
    
    % Check if the input system is valid
    if numEquations ~= numUnknowns
        error('Invalid system: Number of equations must be equal to the number of unknowns.');
    end
    
    % Display coefficient matrix and RHS matrix
    disp('Coefficient Matrix:');
    disp(coefficients);
    disp('Right-Hand Side (RHS) Matrix:');
    disp(rightHandSide);
    
    % Solve the linear system
    unknowns = coefficients \ rightHandSide;
    
    % Display number of unknowns and their values
    fprintf('Number of unknowns: %d\n', numUnknowns);
    disp('Solution for the unknown variables:');
    for i = 1:numUnknowns
        fprintf('x%d = %.2f\n', i, unknowns(i));
    end
end

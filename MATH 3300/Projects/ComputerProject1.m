% Set the format to rational
format rat;

disp('Problem 1')
% Define the size of the matrix
n = 4;

% Create the matrix A_4
A = zeros(n); % initialize a zero matrix
for i = 1:n % loop through the rows
    for j = 1:n % loop through the columns
        A(i,j) = 1 / (i + j + 1); % correctly fill the matrix according to the problem
    end % end for loop
end % end for loop
disp('Matrix A_4 is:')
disp(A)

% Create the matrix b
b = zeros(n,1); % initialze a zero matrix
for i = 1:n % loop through the columns
    b(i,1) = 1; % initialize the columns to a value of '1'
end % end the for loop
disp('Matrix b is:')
disp(b)

% Create the augmented matrix
A_augmented = [A, b]; % Include b as an additional column

% Get the reduced row echelon form
rref_result = rref(A_augmented); % Perform row reduction
disp('The reduced row echelon form of the augmented matrix is:');
disp(rref_result);

% Display the solution 'x' of the linear system
x = rref_result(:, n + 1); % extract last column
disp('The solution x is:');
disp(x);

disp('Problem 2')
% Define the size of the matrix
n = 4;

% Create the matrix A_4
A = zeros(n); % initialize a zero matrix
for i = 1:n % loop through the rows
    for j = 1:n % loop through the columns
        A(i,j) = 1 / (i + j + 1); % correctly fill the matrix according to the problem
    end % end for loop
end % end for loop
disp('Matrix A_4 is:')
disp(A)

inv_A4 = inv(A); % calculate the inverse
disp('The inverse of A_4 is:');
disp(inv_A4);

% Define the size of the 2nd matrix
n = 5;

% Create the matrix A_5
A = zeros(n); % initialize a zero matrix
for i = 1:n % loop through the rows
    for j = 1:n % loop through the columns
        A(i,j) = 1 / (i + j + 1); % correctly fill the matrix according to the problem
    end % end for loop
end % end for loop
disp('Matrix A_5 is:')
disp(A)

inv_A5 = inv(A); % calculate the inverse
disp('The inverse of A_5 is:');
% Print the inverse matrix in matrix format
for i = 1:size(inv_A5, 1)
    fprintf('%.0f ', inv_A5(i, :)); % Print each row
    fprintf('\n'); % New line after each row
end
fprintf('\n')

disp('Problem 3')
% Step 1: Define the equations
h = 0.1; % h = 0.1
i = 0:5; % i = 0, 1, ..., 5
x_i = 2 * i * h; % x_i = 2ih
f = @(x) 1 ./ (1 + 25 * x.^2); % f(x) = 1/(1 + 25x^2)

% Step 2: Calculate function values at interpolation points
f_xi = f(x_i);

% Step 3: Fit a polynomial of degree 5 to the data points (x_i, f(x_i))
coeffs = polyfit(x_i, f_xi, 5); % Get coefficients of P_5

% Step 4: Define the polynomial P_5 using the coefficients
P_5 = @(x) polyval(coeffs, x); % Evaluate polynomial P_5 using polyval
y_i = P_5(x_i); % Evaluate P_5 at the interpolation points

% Step 5: Create the subplots
figure('Name', 'Interpolation by P_5 to show P_f(x_i) = f(x_i)',  'WindowStyle', 'docked'); % dock the figure to the console
subplot(1, 2, 1); % create 2 subplots of the figure and go to the first one

% Step 6: Plot x_i and f(x_i) in red color
plot(x_i, f_xi, 'ro-', 'MarkerFaceColor', 'r', 'DisplayName', 'f(x_i)', 'LineWidth', 4);
hold on; % lock the graph to the subplot

% Step 7: Evaluate P_5 at the interpolation points
plot(x_i, y_i, 'bo-', 'MarkerFaceColor', 'b', 'DisplayName', 'P_5(x_i)', 'LineWidth', 1);

% Step 8: Establish the settings of the graph
xlabel('x_i inputs'); % label the x-axis
ylabel('Function Value'); % label the y-axis
title('Comparison of f(x_i) and P_5(x_i)'); % title of the graph
legend('Location', 'Best'); % create a legend at the best location
grid on; % turn on grid ticks

% Step 9: In addition, choose xx = [0 : 0.01 : 1] and evaluate P_5(xx)
xx = 0:0.01:1; % Define a finer grid for xx values
f_xx = f(xx); % Evaluate f at the finer grid
yy = P_5(xx); % Evaluate P_5 at the finer grid

% Step 8: Plot (xx, f(xx)) in red color
subplot(1, 2, 2); % Go to the second subplot
plot(xx, f_xx, 'r--', 'DisplayName', 'f(xx)', 'LineWidth', 4);
hold on; % lock the graph to the subplot

% Step 9: Plot (xx, yy) in blue color
plot(xx, yy, 'b--', 'DisplayName', 'P_5(xx)', 'LineWidth', 3);

% Step 10: Establish the settings of the graph
xlabel('xx inputs'); % label the x-axis
ylabel('Function Value'); % label the y-axis
title('Comparison of f(xx) and P_5(xx)'); % title of the graph
legend('Location', 'Best'); % create a legend at the best location
grid on; % lock the graph to the subplot

disp('Problem 4')
% Define the original polygon P for the letter "R"
P = [0, 0;   % Bottom-left corner
     0, 6;   % Top-left corner
     4, 6;   % Top-middle
     5, 5;   % Right top
     5, 4;   % Right middle
     4, 3;   % Right bottom
     6, 0;   % Bottom right
     4, 0;   % Bottom right middle
     2, 2;   % Inner middle
     2, 0;   % Inner bottom
     0, 0];  % Close the shape

% Create a figure for the transformations with increased size
figure('Name', '2D Transformations for Letter R', 'WindowStyle', 'docked', 'Position', [100, 100, 800, 600]); % Adjust figure size

% Step 1: Plot the original object
subplot(3, 3, 1);
plot(P(:, 1), P(:, 2), 'r-', 'LineWidth', 2);
title('Original Object');
axis equal; % Keep the aspect ratio
xlim([-1 7]); % Set x-axis limits
ylim([-1 7]); % Set y-axis limits
grid on;

% Step 2: Rotation by alpha = -pi/3
alpha = -pi/3; % Define the angle of rotation
R = [cos(alpha), -sin(alpha); sin(alpha), cos(alpha)]; % Rotation matrix
Q_rotated = (R * P')'; % Apply rotation
subplot(3, 3, 2);
plot(Q_rotated(:, 1), Q_rotated(:, 2), 'b-', 'LineWidth', 2);
title('Rotated Object');
axis equal;
xlim([-1 7]);
ylim([-1 7]);
grid on;

% Step 3: Translation to (1, 2)
translation_vector = [1, 2]; % Translation vector
Q_translated = P + translation_vector; % Apply translation
subplot(3, 3, 3);
plot(Q_translated(:, 1), Q_translated(:, 2), 'g-', 'LineWidth', 2);
title('Translated Object');
axis equal;
xlim([-1 7]);
ylim([-1 7]);
grid on;

% Step 4: Horizontal Expansion by k = 2
k_horiz = 2; % Expansion factor
Q_expanded = Q_translated; % Use translated points for expansion
Q_expanded(:, 1) = Q_expanded(:, 1) * k_horiz; % Expand in X direction
subplot(3, 3, 4);
plot(Q_expanded(:, 1), Q_expanded(:, 2), 'm-', 'LineWidth', 2); % Expanded object
title('Horizontal Expansion (k = 2)');
axis equal;
xlim([-1 15]); % Adjust limits for expansion
ylim([-1 7]);
grid on;

% Step 5: Vertical Contraction by k = 0.3
k_vert = 0.3; % Contraction factor
Q_contracted = Q_translated; % Use translated points for contraction
Q_contracted(:, 2) = Q_contracted(:, 2) * k_vert; % Contract in Y direction
subplot(3, 3, 5);
plot(Q_contracted(:, 1), Q_contracted(:, 2), 'c-', 'LineWidth', 2); % Contracted object
title('Vertical Contraction (k = 0.3)');
axis equal;
xlim([-1 7]);
ylim([-1 3]); % Adjust limits for contraction
grid on;

% Step 6: Reflection through the x-axis
Q_reflected_x = [Q_translated(:, 1), -Q_translated(:, 2)]; % Reflect through x-axis
subplot(3, 3, 6);
plot(Q_reflected_x(:, 1), Q_reflected_x(:, 2), 'y-', 'LineWidth', 2);
title('Reflected through x-axis');
axis equal;
xlim([-1 7]);
ylim([-7 1]); % Adjust limits to fit the reflection
grid on;

% Step 7: Reflection through the y-axis
Q_reflected_y = [-Q_translated(:, 1), Q_translated(:, 2)]; % Reflect through y-axis
subplot(3, 3, 7);
plot(Q_reflected_y(:, 1), Q_reflected_y(:, 2), 'k-', 'LineWidth', 2);
title('Reflected through y-axis');
axis equal;
xlim([-7 1]); % Adjust limits to fit the reflection
ylim([-1 7]);
grid on;

% Step 8: Reflection through the line x = y
Q_reflected_xy = [Q_translated(:, 2), Q_translated(:, 1)]; % Reflect through line x = y
subplot(3, 3, 8);
plot(Q_reflected_xy(:, 1), Q_reflected_xy(:, 2), 'm-', 'LineWidth', 2);
title('Reflected through line x = y');
axis equal;
xlim([-1 7]);
ylim([-1 7]);
grid on;

% Step 9: Reflection through the origin
Q_reflected_origin = [-Q_translated(:, 1), -Q_translated(:, 2)]; % Reflect through origin
subplot(3, 3, 9);
plot(Q_reflected_origin(:, 1), Q_reflected_origin(:, 2), 'g-', 'LineWidth', 2);
title('Reflected through origin');
axis equal;
xlim([-7 1]); % Adjust limits to fit the reflection
ylim([-7 1]);
grid on;

% Adjust the layout
sgtitle('2D Transformations of the Letter R'); % Super title for the entire figure

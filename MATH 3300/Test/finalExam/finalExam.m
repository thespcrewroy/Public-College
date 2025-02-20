% Given data points
x = 0:0.1:1.0;
y = [1.0187, 0.8750, 0.7326, 0.6266, 0.4949, 0.3255, 0.0436, 0.2340, 0.6625, 1.2697, 1.9881];

% Construct the design matrix A
A = [ones(length(x), 1), x', sin(x)', exp(x)']

% Solve for the coefficients using the normal equation
c = (A' * A) \ (A' * y');

% Calculate the residual vector
residual = y' - A * c;

% Display the coefficients and the residuals
disp('Coefficients:');
disp(c);
disp('Residuals:');
disp(residual);
c
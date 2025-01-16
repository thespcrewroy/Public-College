disp('6.4: Example 3 - Orthinomal Basis')
x1 = sym([3; 6; 0])
x2 = sym([1; 2; 2])

% Step 1: Let v1 = x1
disp('v1:')
v1 = x1

% Step 2: Project x2 onto v1
disp('Let W1 = Span{x1} = Span{v2}')
proj_w1_x2 = (x2' * v1) / (v1' * v1) * v1;
disp('v2 (after projection):')
v2 = x2 - proj_w1_x2  % Subtract projection from x2 to get v2

% Step 3: Normalize
v1_norm = sqrt(v1(1,1)^2 + v1(2,1)^2 + v1(3,1)^2);
u1 = v1/v1_norm
v2_norm = sqrt(v2(1,1)^2 + v2(2,1)^2 + v2(3,1)^2);
u2 = v2/v2_norm

disp('6.4: Example 4 - QR Factorization')

% Given vectors
x1 = sym([1; 1; 1; 1]);
x2 = sym([0; 1; 1; 1]);
x3 = sym([0; 0; 1; 1]);

% Step 1: Let v1 = x1
disp('v1:')
v1 = x1

% Step 2: Project x2 onto v1
disp('Let W1 = Span{x1} = Span{v2}')
proj_w1_x2 = (x2' * v1) / (v1' * v1) * v1;
disp('v2 (after projection):')
v2 = x2 - proj_w1_x2  % Subtract projection from x2 to get v2

% Step 3: Scale v2
disp('Scaled v2:')
v2_scaled = v2 * 4

disp('Let W2 = Span{x2} = Span{v2}')
% Step 4: Project x3 onto both v1 and v2
proj_w1_x3 = (x3' * v1) / (v1' * v1) * v1
proj_w2_x3 = (x3' * v2_scaled) / (v2_scaled' * v2_scaled) * v2_scaled

% Step 5: Subtract projections from x3 to get v3
disp('v3 (after subtraction of projections):')
v3 = x3 - proj_w1_x3 - proj_w2_x3
v3_scaled = v3 * 3

% Step 6: Normalize
v1_norm = sqrt(v1(1,1)^2 + v1(2,1)^2 + v1(3,1)^2 + v1(4,1)^2);
u1 = v1/v1_norm
v2_norm = sqrt(v2_scaled(1,1)^2 + v2_scaled(2,1)^2 + v2_scaled(3,1)^2 + v2_scaled(4,1)^2);
u2 = v2_scaled/v2_norm
v3_norm = sqrt(v3_scaled(1,1)^2 + v3_scaled(2,1)^2 + v3_scaled(3,1)^2 + v3_scaled(4,1)^2);
u3 = v3_scaled/v3_norm

% Step 7: Q is the basis of the norms
Q = [u1 u2 u3]

% Step 8: Apply therem 12 to find R
A = [x1 x2 x3]
R = Q' * A
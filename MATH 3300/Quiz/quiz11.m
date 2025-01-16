% Given vectors
x1 = [1; 2; 3; 4];
x2 = [1; 1; 1; 1];
x3 = [0; 1; 2; 3];
x4 = [1; 1; 0; 0];

% Step 1: v1 = x1
v1 = x1;

% Step 2: v2 = x2 - proj_v1(x2)
proj_v1_x2 = (dot(x2, v1) / dot(v1, v1)) * v1;
v2 = x2 - proj_v1_x2;
format rat;
% Step 3: v3 = x3 - proj_v1(x3) - proj_v2(x3)
proj_v1_x3 = (dot(x3, v1) / dot(v1, v1)) * v1;
proj_v2_x3 = (dot(x3, v2) / dot(v2, v2)) * v2;
v3 = x3 - proj_v1_x3 - proj_v2_x3;

% Step 4: v4 = x4 - proj_v1(x4) - proj_v2(x4) - proj_v3(x4)
proj_v1_x4 = (dot(x4, v1) / dot(v1, v1)) * v1;
proj_v2_x4 = (dot(x4, v2) / dot(v2, v2)) * v2;
proj_v3_x4 = (dot(x4, v3) / dot(v3, v3)) * v3;
v4 = x4 - proj_v1_x4 - proj_v2_x4 - proj_v3_x4;

% Output orthogonal basis vectors
v1
v2
v3
v4



% Given vectors
u = [1; 2; 3];
v = [1; 1; 1];
b = [1; 0; 1];

% Matrix A formed by stacking u and v as columns
A = [u, v]

% Calculate the projection of b onto the subspace W spanned by u and v
proj_W_b = A * inv(A' * A) * A' * b;

% Output the result
disp('The projection of b onto the subspace W is:');
disp(proj_W_b);


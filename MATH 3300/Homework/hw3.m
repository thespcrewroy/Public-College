% Problem 1
disp('Problem 1')
A = [1 -1 -1 -1; 5 2 1 -3]
A(2,:) = -5*A(1,:) + A(2,:);
A(2,:) = (1/7)*A(2,:);
A(1,:) = A(2,:) + A(1,:);
disp('Span={u, v}: u = [1/7; -6,7; 1, 0] and v = [5/7, 2/7, 0, 1]')

% Problem 2
disp('Problem 2')
A = [1 1 -1 4; 4 4 -4 16]
A(2,:) = -4*A(1,:) + A(2,:);
disp('Solution: x2[-1, 1, 0, 0] + x3[1, 0, 1, 0] + x4[-4, 0, 0, 1]')

% Problem 3
disp('Problem 3')
A = [1 -2 -2 2 -3 2 0; 0 0 1 -2 0 -4 0; 0 0 0 0 1 -4 0; 0 0 0 0 0 0 0]
A(1,:) = 3*A(3,:) + A(1,:);
A(1,:) = 2*A(2,:) + A(1,:);
disp('Solution: x2[2, 1, 0, 0, 0, 0] + x4[2, 0, 2, 1, 0, 0] + x6[18, 0, 4, 0, 4, 1]')

% Problem 4
disp('Problem 4')
A = [4 1 9; 16 4 36]
A(2,:) = -4*A(1,:) + A(2,:);
A(1,:) = (1/4)*A(1,:);
disp('[x1, x2] = [9/4, 0] + s[-1/4, 1]')

% Problem 5
disp('Problem 5')
A = [1 1 -2 -6; 3 4 -2 8]
A(2,:) = -3*A(1,:) + A(2,:);
A(1,:) = -1*A(2,:) + A(1,:);

% Problem 6
disp('Problem 6')
A = [1 -1 -4 -5]
B = [-2; -1; 4; -2]
A*B

% Problem 7
disp('Problem 7')
A = [-2 -4 6 -11; 2 5 -7 13; 3 8 -11 22]
A(2,:) = A(1,:) + A(2,:);
A(3,:) = (3/2)*A(1,:) + A(3,:);
A(3,:) = -2*A(2,:) + A(3,:)

% Problem 8
disp('Problem 8')
A = [-16 20 -12; -8 10 -6; -24 30 -18]
A(2,:) = (-1/2)*A(1,:) + A(2,:);
A = [-16 20 -12; -24 30 -18; 0 0 0];
A(2,:) = (-3/2)*A(1,:) + A(2,:)
disp('Three identical lines')

B = [-5 5 5; 6 7 9; -27 1 0]
B(2,:) = (6/5)*B(1,:) + B(2,:);
B(3,:) = (-27/5)*B(1,:) + B(3,:);
B(3,:) = 2*B(2,:) + B(3,:);
B(2,:) = (1/13)*B(2,:);
B(1,:) = -5*B(2,:) + B(1,:);
B(1,:) = -1/5*B(1,:)
disp("Three non-parallel lines with no common intersection")

C = [-5 5 5; 6 7 9; -27 1 -3]
C(2,:) = (6/5)*C(1,:) + C(2,:);
C(3,:) = (-27/5)*C(1,:) + C(3,:);
C(3,:) = 2*C(2,:) + C(3,:);
C(2,:) = (1/13)*C(2,:);
C(1,:) = -5*C(2,:) + C(1,:);
C(1,:) = (-1/5)*C(1,:)
disp("Three lines intersecting at a single point")

% Problem 9
disp('Problem 9')
A = [2 4 -6 12; -3 -6 9 16]
A(2,:) = (3/2)*A(1,:) + A(2,:)
disp('Two parallel planes')

B = [2 4 -6 -12; -3 -6 9 18]
B(2,:) = (3/2)*B(1,:) + B(2,:)
disp('Two planes that are the same')

C = [2 4 -6 12; -1 5 -9 1]
C(2,:) = (1/2)*C(1,:) + C(2,:);
C(2,:) = (1/7)*C(2,:);
C(1,:) = -4*C(2,:) + C(1,:);
C(1,:) = (1/2)*C(1,:)
disp('Two planes intersecting in a line')

% Problem 10
disp('Problem 10')
A = [3 7 2 0; -2 -5 -1 1; 1 5 3 -1]
A(2,:) = (2/3)*A(1,:) + A(2,:);
A(3,:) = (-1/3)*A(1,:) + A(3,:);
A(3,:) = 8*A(2,:) + A(3,:);
A(3,:) = (1/5)*A(3,:);
A(2,:) = (-1/3)*A(3,:) + A(2,:);
A(1,:) = -2*A(3,:) + A(1,:);
A(2,:) = -3*A(2,:);
A(1,:) = -7*A(2,:) + A(1,:);
A(1,:) = (1/3)*A(1,:)
disp('R^3')

B = [-2 0 -2 6; -1 0 -1 3; 3 0 3 -9]
B(2,:) = (-1/2)*B(1,:) + B(2,:);
B(3,:) = (3/2)*B(1,:) + B(3,:)
disp('Line')

C = [-1 2 -5 -4; -2 4 -10 -8; -3 5 -13 -9]
C(2,:) = (-2)*C(1,:) + C(2,:);
C(3,:) = (-3)*C(1,:) + C(3,:);
C = [-1 2 -5 -4; 0 -1 2 3; 0 0 0 0];
C(2,:) = -1*C(2,:);
C(1,:) = -2*C(2,:) + C(1,:);
C(1,:) = -1*C(1,:)
disp('Plane')

% Problem 12
disp('Problem 12')
A = [1 -9 0; 3 1 0]
A(2,:) = -3*A(1,:) + A(2,:);
A(2,:) = (1/28)*A(2,:);
A(1,:) = 9*A(2,:) + A(1,:)
disp('trivial solution = independent')

B = [-6 -9 1 2 0; -1 -5 -5 -3 0]
B(2,:) = (-1/6)*B(1,:) + B(2,:);
B(2,:) = (-1/3.5)*B(2,:);
B(1,:) = 9*B(2,:) + B(1,:);
B(1,:) = (-1/6)*B(1,:)
disp('triviial solution = independent')

C = [8, -1, 2, 0; -1, 7, 4 0]
C(2,:) = (1/8)*C(1,:) + C(2,:);
C(2,:) = (1/6.875)*C(2,:);
C(1,:) = C(2,:) + C(1,:);
C(1,:) = (1/8)*C(1,:)
disp('trivial solution = independent')

D = [5 -4 9 0; -3 -5 -6 0; -8 -1 -15 0]
D(2,:) = (3/5)*D(1,:) + D(2,:);
D(3,:) = (8/5)*D(1,:) + D(3,:);
D(3,:) = -1*D(2,:) + D(3,:)
disp('infinite solutions = nontrivial solution = dependent')

% Problem 13
disp('Problem 13')
disp('Dependency Test:')
disp('1. Matricies are a factor of eachother')
disp('2. Less entries than matricies (p > n)')
disp('3. There is a zero vector')
disp('4. There is a free variable (evaluates to infinite solutions)')
disp('5. The determinant of the square matrix is 0')
A = [5 4 -2 0; -3 -2 0 0; -4 1 -11 0; -1 5 -17 0]
A(2,:) = (3/5)*A(1,:) + A(2,:);
A(3,:) = (4/5)*A(1,:) + A(3,:);
A(4,:) = (1/5)*A(1,:) + A(4,:);
A(3,:) = (-4.2/0.4)*A(2,:) + A(3,:)
disp('Third row shows a free variable = infinite nontrivial solutions')
disp('Linearly dependent')

% Problem 14
disp('Problem 14')
A = [10 2 2 0; -50 -14 -14 0; -5 -2 -2 0]
A(2,:) = 5*A(1,:) + A(2,:);
A(3,:) = (1/2)*A(1,:) + A(3,:);
A(3,:) = (-1/4)*A(2,:) + A(3,:);
A(2,:) = (-1/4)*A(2,:);
A(1,:) = (-2)*A(2,:) + A(1,:);
A(1,:) = (1/10)*A(1,:)

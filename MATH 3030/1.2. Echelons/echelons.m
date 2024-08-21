A = [1 4 5 -9 -7;-1 -2 -1 3 1;-2 -3 0 3 -1;0 -3 -6 4 9];
A(2,:) = A(1,:)+A(2,:); A(3,:)=2*A(1,:)+A(3,:);
disp(A)

% missing or unbalanced delimiters, or other syntax error. To construct
% matricies, use brackets instead of parenthess %
% Row reduction %
A1 = A(:,1:4);b = A(:,5);
x = A1\b
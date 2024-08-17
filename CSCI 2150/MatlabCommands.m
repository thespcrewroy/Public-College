% Section A
xhello = 1.53424;
str = 'Number';
fprintf('%s %d\n', str, xhello);

disp('ceil:')
disp(ceil(xhello));

disp('fix:')
disp(fix(xhello));

disp('abs:')
disp(abs(xhello));

disp('floor:')
disp(floor(xhello));

disp('fix:')
disp(fix(xhello));

disp('sign:')
disp(sign(xhello));

disp('round:')
disp(round(xhello));

disp('exp:')
disp(exp(xhello));

disp('num2str:')
disp(num2str(xhello));
fprintf('\nSection B:\n')


% Section B
disp('Round the number 9.25467 to 3 decimal digits.')
fprintf('%.3f\n', 9.25467);

disp('Round the number -100.99 to the nearest integer towards zero.')
disp(ceil(-100.99));

disp('Round the number 16.7 to the nearest integer towards positive infinity.')
disp(ceil(16.7));

disp('Find the square root of 81.')
disp(sqrt(81));

% Section C
fprintf('\nSection C\n')
disp('If you use a semicolon, you need disp(x) to display the function to the command window.')
disp('Without the semicolon, you do not need the disp(x) function.')
fprintf('\n');

disp('double precision is the default numeric data type in MATLAB')
fprintf('\n');

disp('You can declare an integer using the following: int8(x), int16(x)')
disp('int32(x), int64(x), unit8(x), unit16(x), unit32(x), unit64(x).')
fprintf('\n');

disp('When you declare a numeric variable x as an unsigned 16-bit integer')
disp(' and assign it the value 65538, MATLAB will automatically perform ')
disp(' integer overflow and wraparound. In a 16-bit unsigned integer ')
disp(' representation, the maximum value is 65535, and the minimum value ')
disp(' is 0. Any value outside this range will "wrap around" to a value within this range.')

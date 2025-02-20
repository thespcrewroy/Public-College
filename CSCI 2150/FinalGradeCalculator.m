% Swapnil Roy
% This program calculates the final grade for a student based on their
% scores in 3 exams and a project

function[] = gardes()

% Prompt User for Exam and Project Scores
Test_Score_One = input('Enter score of test 1: ');
Test_Score_Two = input('Enter score of test 2: ');
Test_Score_Three = input('Enter score of test 3: ');
Project_Score =  input('Enter score of project: ');

% Calculate the Total Score
Total_Score = ((Test_Score_One + Test_Score_Two + Test_Score_Three + Project_Score)/350)*100;

if Total_Score == 100
    disp('Congratulations on a perfect score!')
elseif 100 > Total_Score && Total_Score >= 90
    disp(Total_Score)
    disp('A')
elseif 90 > Total_Score && Total_Score >= 80
    disp(Total_Score)
    disp('B')
elseif 80 > Total_Score && Total_Score >= 70
    disp(Total_Score)
    disp('C')
elseif 70 > Total_Score && Total_Score >= 60
    disp(Total_Score)
    disp('D')
elseif 60 > Total_Score
    disp(Total_Score)
    disp('F')
end


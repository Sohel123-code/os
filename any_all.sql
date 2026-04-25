-- IN
SELECT * FROM Student WHERE Dept IN ('CSE','ECE');

-- ANY
SELECT Name FROM Student
WHERE Marks > ANY (SELECT Marks FROM Student WHERE Dept='ECE');

-- ALL
SELECT Name FROM Student
WHERE Marks > ALL (SELECT Marks FROM Student WHERE Dept='ECE');

-- EXISTS
SELECT Name FROM Student S
WHERE EXISTS (
   SELECT * FROM Result R WHERE S.RollNo = R.RollNo
);

-- NOT EXISTS
SELECT Name FROM Student S
WHERE NOT EXISTS (
   SELECT * FROM Result R WHERE S.RollNo = R.RollNo
);

-- UNION
SELECT Name FROM Student
UNION
SELECT Name FROM Faculty;

-- INTERSECT
SELECT Name FROM Student
INTERSECT
SELECT Name FROM Alumni;
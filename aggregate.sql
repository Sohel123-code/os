SELECT COUNT(*) FROM Student;
SELECT SUM(Marks) FROM Student;
SELECT AVG(Marks) FROM Student;
SELECT MAX(Marks) FROM Student;
SELECT MIN(Marks) FROM Student;

SELECT Dept, AVG(Marks)
FROM Student
GROUP BY Dept;

SELECT Dept, AVG(Marks)
FROM Student
GROUP BY Dept
HAVING AVG(Marks) > 70;

CREATE VIEW TopStudents AS
SELECT RollNo, Name, Marks
FROM Student
WHERE Marks > 80;

DROP VIEW TopStudents;
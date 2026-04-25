DECLARE
   CURSOR c1 IS SELECT RollNo, Name FROM Student;
   r c1%ROWTYPE;
BEGIN
   OPEN c1;
   LOOP
      FETCH c1 INTO r;
      EXIT WHEN c1%NOTFOUND;
      DBMS_OUTPUT.PUT_LINE(r.RollNo || ' ' || r.Name);
   END LOOP;
   CLOSE c1;
END;
/
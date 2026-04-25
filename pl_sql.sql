DECLARE
   v_marks NUMBER;
BEGIN
   SELECT Marks INTO v_marks
   FROM Student
   WHERE RollNo = 101;

   IF v_marks >= 60 THEN
      DBMS_OUTPUT.PUT_LINE('First Class');
   END IF;

EXCEPTION
   WHEN NO_DATA_FOUND THEN
      DBMS_OUTPUT.PUT_LINE('No Record Found');
END;
/
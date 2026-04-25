DECLARE
   marks NUMBER := 85;
BEGIN
   IF marks >= 90 THEN
      DBMS_OUTPUT.PUT_LINE('A Grade');
   ELSIF marks >= 75 THEN
      DBMS_OUTPUT.PUT_LINE('B Grade');
   ELSE
      DBMS_OUTPUT.PUT_LINE('C Grade');
   END IF;

   CASE
      WHEN marks >= 90 THEN DBMS_OUTPUT.PUT_LINE('Excellent');
      WHEN marks >= 75 THEN DBMS_OUTPUT.PUT_LINE('Good');
      ELSE DBMS_OUTPUT.PUT_LINE('Average');
   END CASE;
END;
/
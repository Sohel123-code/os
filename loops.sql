DECLARE
   i NUMBER := 1;
BEGIN
   WHILE i <= 5 LOOP
      DBMS_OUTPUT.PUT_LINE(i);
      i := i + 1;
   END LOOP;

   FOR j IN 1..5 LOOP
      DBMS_OUTPUT.PUT_LINE(j);
   END LOOP;

   IF i > 5 THEN
      RAISE_APPLICATION_ERROR(-20001,'Value exceeded');
   END IF;
END;
/
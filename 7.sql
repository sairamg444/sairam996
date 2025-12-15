-- 1) Names with occupation initial
SELECT NAME || '(' || SUBSTR(OCCUPATION, 1, 1) || ')'
FROM OCCUPATIONS
ORDER BY NAME;

-- 2) Counts per occupation in required format
SELECT 'There are a total of ' 
       || COUNT(*) 
       || ' ' 
       || LOWER(OCCUPATION) 
       || 's.'
FROM OCCUPATIONS
GROUP BY OCCUPATION
ORDER BY COUNT(*), OCCUPATION;

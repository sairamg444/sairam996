SELECT s.name
FROM Students s
JOIN Friends f 
  ON s.id = f.id
JOIN Packages p 
  ON s.id = p.id
JOIN Packages pf 
  ON f.friend_id = pf.id
WHERE pf.salary > p.salary
ORDER BY pf.salary;

SELECT f1.x, f1.y
FROM Functions f1
JOIN Functions f2
  ON f1.x = f2.y AND f1.y = f2.x
WHERE f1.x <= f1.y
GROUP BY f1.x, f1.y
ORDER BY f1.x;

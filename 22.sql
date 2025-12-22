SELECT REPEAT('* ', n) AS pattern
FROM (
    SELECT @row := @row + 1 AS n
    FROM information_schema.tables, (SELECT @row := 0) r
    LIMIT 20
) t;

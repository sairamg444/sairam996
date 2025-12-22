SELECT REPEAT('* ', n) AS pattern
FROM (
    SELECT @row := @row - 1 AS n
    FROM information_schema.tables, (SELECT @row := 20) r
    LIMIT 20
) t;

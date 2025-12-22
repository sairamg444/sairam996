SELECT ROUND(
    AVG(LAT_N), 4
)
FROM (
    SELECT LAT_N
    FROM STATION
    ORDER BY LAT_N
    LIMIT 2 - (SELECT COUNT(*) FROM STATION) % 2    -- 1 row if odd, 2 rows if even
    OFFSET (SELECT (COUNT(*) - 1) / 2 FROM STATION)
) AS median_rows;

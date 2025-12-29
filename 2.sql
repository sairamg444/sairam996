SELECT ROUND(
    CAST(
        (SELECT LAT_N
         FROM STATION
         ORDER BY LAT_N
         FETCH FIRST 1 ROWS ONLY
         OFFSET (SELECT FLOOR(COUNT(*)/2)
                 FROM STATION) ROWS)
        AS DECIMAL(10,4)
    ), 4
) AS median

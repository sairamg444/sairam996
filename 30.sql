WITH consecutive_groups AS (
    SELECT 
        start_date,
        end_date,
        start_date - INTERVAL (ROW_NUMBER() OVER (ORDER BY start_date)) DAY AS grp
    FROM Projects
)
SELECT 
    MIN(start_date) AS project_start,
    MAX(end_date) AS project_end
FROM consecutive_groups
GROUP BY grp
ORDER BY DATEDIFF(MAX(end_date), MIN(start_date)), MIN(start_date);

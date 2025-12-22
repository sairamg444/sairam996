WITH RECURSIVE numbers AS (
    SELECT 2 AS n
    UNION ALL
    SELECT n + 1
    FROM numbers
    WHERE n < 1000   -- adjust upper bound if needed
)
SELECT GROUP_CONCAT(n SEPARATOR '&') AS primes
FROM numbers
WHERE NOT EXISTS (
    SELECT 1
    FROM numbers n2
    WHERE n2.n < numbers.n
      AND n2.n > 1
      AND numbers.n % n2.n = 0
);

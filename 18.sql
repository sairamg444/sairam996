SELECT h.hacker_id, h.name, COUNT(c.challenge_id) AS total_challenges
FROM Hackers h
JOIN Challenges c
  ON h.hacker_id = c.hacker_id
GROUP BY h.hacker_id, h.name
HAVING COUNT(c.challenge_id) = (
          SELECT MAX(cnt)
          FROM (
              SELECT COUNT(ch.challenge_id) AS cnt
              FROM Challenges ch
              GROUP BY ch.hacker_id
          ) AS sub
      )
   OR COUNT(c.challenge_id) < (
          SELECT MAX(cnt)
          FROM (
              SELECT COUNT(ch.challenge_id) AS cnt
              FROM Challenges ch
              GROUP BY ch.hacker_id
          ) AS sub
      )
ORDER BY total_challenges DESC, h.hacker_id;

SELECT h.hacker_id, h.name, SUM(max_scores) AS total_score
FROM Hackers h
JOIN (
    SELECT s.hacker_id, s.challenge_id, MAX(s.score) AS max_scores
    FROM Submissions s
    GROUP BY s.hacker_id, s.challenge_id
) AS sub
  ON h.hacker_id = sub.hacker_id
GROUP BY h.hacker_id, h.name
HAVING total_score > 0
ORDER BY total_score DESC, h.hacker_id ASC;

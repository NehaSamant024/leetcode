# Write your MySQL query statement below
/*Approach
Use the dense_rank() function to assign a rank to each score in the Scores table, ordered by score in descending order.
Select the Score column and the rank assigned by the dense_rank() function.
The result set will contain one row for each score in the Scores table, with the score and its corresponding rank.*/
#select score, dense_rank() over(order by score desc) as Rank from Scores;
SELECT s.score,
    (
        SELECT count(DISTINCT (ss.score)) + 1
        FROM Scores ss
        WHERE ss.score > s.score
        ) AS 'rank'
FROM Scores s
ORDER BY s.score DESC;
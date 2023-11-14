-- print full description of the table first_table
-- from the database hbtn_0c_0
SELECT score, COUNT('score') as number 
FROM second_table
GROUP BY score
ORDER BY score DESC;

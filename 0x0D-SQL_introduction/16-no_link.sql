-- this is a script that print all column except those without name value
-- displays them in descending order of score
SELECT score, name FROM second_table
WHERE name != ''
ORDER BY score DESC;

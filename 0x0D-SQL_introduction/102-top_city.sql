-- Display top 3 cities temperatures during July and August ordered by temperature (descending)
SELECT city, temperature
FROM hbtn_0c_0.table_name
WHERE month IN ('July', 'August')
ORDER BY temperature DESC
LIMIT 3;


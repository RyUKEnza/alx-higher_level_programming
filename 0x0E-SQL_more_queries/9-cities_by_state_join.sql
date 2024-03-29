-- Select cities from hbtn_0d_usa database with corresponding state names
SELECT cities.id, cities.name, states.name AS state_name
FROM cities, states
WHERE cities.state_id = states.id
ORDER BY cities.id ASC;


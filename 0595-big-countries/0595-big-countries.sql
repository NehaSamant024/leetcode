# Write your MySQL query statement below
#select name,population,area from World where area>3000000 or population>25000000;
#SELECT name, population, area FROM World WHERE  population >=25000000 or area>=3000000;
select name, population, area from World 
where area >= 3000000 or population >= 25000000;
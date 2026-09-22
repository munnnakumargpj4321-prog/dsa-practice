# Write your MySQL query statement below
select 
    s.name as Employee 
from Employee as f
join Employee as s
on s.managerId =f.id 
where s.salary >f.salary 

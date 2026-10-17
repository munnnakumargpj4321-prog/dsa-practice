# Write your MySQL query statement below
SELECT 
    E.salary  as Salary,
    E.name    as Employee,  
    D.name    as  Department 
from Employee as E
left join Department as D
on E.departmentId =D.id 
where E.salary=(
    select max(E2.salary)
    from Employee as E2
    where E2.departmentId=e.departmentId
)


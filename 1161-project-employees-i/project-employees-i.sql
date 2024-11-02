# Write your MySQL query statement below0
select p.project_id,Round(Avg(E.experience_years),2) as average_years
from Project as p join Employee as E on p.employee_id=e.employee_id
group by p.project_id

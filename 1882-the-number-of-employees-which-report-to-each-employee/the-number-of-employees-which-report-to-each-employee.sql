# Write your MySQL query statement below
select reports_to as employee_id,(select name from employees as e2 where e1.reports_to=e2.employee_id ) as name, count(reports_to) as reports_count,round(avg(age)) as average_age from Employees as e1
where reports_to is not NULL
group by reports_to order by employee_id
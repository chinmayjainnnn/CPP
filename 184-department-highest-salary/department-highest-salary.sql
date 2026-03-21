

select d.name as Department, e.name as Employee, e.salary as Salary 
from Employee e 
join Department d ON e.departmentId=d.id 
join (select departmentId, MAX(salary) as max_sal from Employee group by departmentId) m on e.departmentId = m.departmentId
 AND e.salary = m.max_sal;
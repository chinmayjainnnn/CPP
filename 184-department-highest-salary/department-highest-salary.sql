select d.name as Department, e.name as Employee,salary
from Employee as e
join Department as d on e.departmentId =d.id
where salary =(select max(salary)  from Employee as e2 where e.departmentId=e2.departmentId  )

select name
from Employee as e
join (select managerId,count(managerId) as c from Employee group By managerId having c>4) as e2 on e.id =e2.managerId
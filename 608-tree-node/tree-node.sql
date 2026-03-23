# Write your MySQL query statement below
select id,
case
    when p_id is NULL then 'Root'
    when id not in (select t2.p_id from Tree as t2 where t2.p_id is not NULL) then 'Leaf'
    else 'Inner'
    end as type
from Tree

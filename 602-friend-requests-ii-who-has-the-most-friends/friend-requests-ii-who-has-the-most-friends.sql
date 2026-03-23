# Write your MySQL query statement below
select t2.id,count(t2.id) as num
from(
select requester_id as id from RequestAccepted  
union ALL
select accepter_id as id from RequestAccepted    
) as t2
group by t2.id 
order by count(t2.id) DESC limit 1

-- select requester_id as id from RequestAccepted    
-- union ALL
-- select accepter_id as id from RequestAccepted   

with temp as
(
select requester_id as id from RequestAccepted  
union ALL
select accepter_id as id from RequestAccepted    
) 

select id,count(id) as num
from temp
group by id
order by count(id) desc
limit 1
# Write your MySQL query statement be
select customer_number
from (select customer_number,count(*) as ord from Orders group by customer_number order by count(*) desc limit 1 ) as tab

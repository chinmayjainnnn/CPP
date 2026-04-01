# Write your MySQL query statement below
select name
from SalesPerson 
where name not in(
select name 
from SalesPerson as s left outer join Orders o on s.sales_id=o.sales_id
where o.com_id=(select com_id from Company where name="RED" ) )
# Write your MySQL query statement below
select p.firstName ,p.lastName,Address.city,Address.state
from Person as p
Left Join Address on p.personId=Address.personId;
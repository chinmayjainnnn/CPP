# Write your MySQL query statement below
select distinct a.email
from Person as a
Join Person as b on a.email=b.email and a.id != b.id
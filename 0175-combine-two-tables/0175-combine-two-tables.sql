# Write your MySQL query statement below

select firstName, lastName, city, state from Person as p
left join Address as addr
on p.personId=addr.personId;

  /*section 01*/

select*
from Course

select*
from Student;

select*
from Module;

select*
from Offers;

select *
from Student
where Sname='Ann';

select Mcode,NoOfCredits
from Module

select*
from Student
where Sname like '%a';

select*
from Student
where dob<'1996-01-01';

select Sname,NIC
from Student
where Address like '%colombo%';

select*
from Student
where Sname like 'k%' and CID='DS';

/*section 02 */

select *
from Student
order by Sname;

select*
from Student
order by Sname desc;

select*
from Student
order by Sname,CID desc;

/*section 03 */

select count(NIC) As 'No of students in this university'
from Student;

select count(CID) As 'No of courses'
from Course;

select count(Mcode) as 'No of modules'
from Module
where NoOfCredits=3;

select sum(C_fee)
from Course;

select min(C_fee) as'Minimest fee'
from Course;

select avg(C_fee) as'Average fee'
from Course;

select CID,count (Mcode) as 'No of modules'
from Offers
group by CID;


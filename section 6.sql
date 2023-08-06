select*
from Student;

select CID, count(Mcode) as 'No of modules'
from Offers
group by CID;

select CID, count(SID) as 'No of students'
from Student
group by CID;

select CID,Accadamic_year ,   count(Mcode) as 'No of modules'
from Offers
group by Accadamic_year,CID;


select CID,Accadamic_Year,      count(Mcode) as 'No of modules'
from Offers
where Semester=2
group by CID,Accadamic_Year;







/* section 6  */

select S.SID,S.Sname,C.Cname
from 
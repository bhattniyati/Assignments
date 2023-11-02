create database Prog2;

use Prog2;

create table Employee
(
	Employee_id int primary key,
    First_name varchar(30),
    Last_name varchar(20),
    Salary int,
    Joining_date datetime,
    Department text
);

insert into Employee (Employee_id,First_name,Last_name,Salary,Joining_date,Department)values
(1,"John","Abraham",1000000,"2013-01-01 12:00:00","Banking"),
(2,"Michael","Clarke",8000000,"2013-01-01 12:00:00","Insurance"),
(3,"Roy","Thomas",7000000,"2013-02-01 12:00:00","Banking"),
(4,"Tom","Jose",6000000,"2013-02-01 12:00:00","Insurance"),
(5,"Jerry","Pinto",650000,"2013-02-01 12:00:00","Insurance"),
(6,"Philip","Mathew",750000,"2013-01-01 12:00:00","Services"),
(7,"TestName1","123",650000,"2013-01-01 12:00:00","Services"),
(8,"TestName2","Laname%",6000000,"2013-02-01 12:00:00","Insurance");

create table Incentive
(
	Employee_ref_id int,
    Incentive_date date,
    Incentive_amount int
);

insert into Incentive (Employee_ref_id,Incentive_date,Incentive_amount)values
(1,"2013-02-01",5000),
(2,"2013-02-01",3000),
(3,"2013-02-01",4000),
(1,"2013-01-01",4500),
(2,"2013-01-01",3500);

select * from Employee;

select * from Incentive;

-- Get First_Name from employee table using Tom name “Employee Name”.

	select First_name as Employee_Name from Employee;

-- Get FIRST_NAME, Joining Date, and Salary from employee table.

	select First_name,Joining_date,salary from Employee;
    
-- Get all employee details from the employee table order by First_Name Ascending and Salary descending?

	select * from Employee
	order by First_name asc;

	select * from Employee
	order by Salary desc;

-- Get employee details from employee table whose first name contains ‘J’

	select * from Employee
	where First_name like "J%";
    
-- Get department wise maximum salary from employee table order by salaryascending?

	select Department, sum(Salary) Salary from Employee 
	group by Department order by Salary asc;

-- Select first_name, incentive amount from employee and incentives table 
-- forthose employees who have incentives and incentive amount greater than 3000

	select First_name, Incentive_amount
	from Employee inner join Incentive on Employee_id=Employee_ref_id and Incentive_amount>3000;
    
-- Create After Insert trigger on Employee table which insert records in viewtable


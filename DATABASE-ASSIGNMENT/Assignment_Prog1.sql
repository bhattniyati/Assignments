create database Prog1;

use Prog1;

create table Students
(
	Rollno int primary key,
	Name text,
	Branch varchar(50)
);

select * from Students;

create table Exams
(
	Rollno int,
	S_code varchar(20),
	Marks int,
	P_code varchar(10),
	foreign key (Rollno) references Students(Rollno) 
);

select * from Exams;

insert into Students (Rollno,Name,Branch)values
(1,"Jay","Computer Science"),
(2,"Suhani","Electronic and Com"),
(3,"Kriti","Electronic and Com");

insert into Exams (Rollno,S_code,Marks,P_code)values
(1,"CS11",50,"CS"),
(1,"CS12",60,"CS"),
(2,"EC101",66,"EC"),
(2,"EC102",70,"EC"),
(3,"EC101",45,"EC"),
(3,"EC102",50,"EC");




create database Prog3;

use Prog3;

create table Salseperson
(
	SNo int primary key,
    SNAME varchar(20),
    CITY varchar(20),
    COMM float
);

create table Customer
(
	CNM int primary key,
    CNAME varchar(20),
    CITY varchar(30),
    RATING int,
    Sno int,
    foreign key (Sno) references Salseperson(Sno)
);

insert into Salseperson (Sno,SNAME,CITY,COMM) values
(1001,"Peel","London",.12),
(1002,"Serres","San Jose",.13),
(1004,"Motika","London",.11),
(1007,"Rafkin","Barcelona",.15),
(1003,"Axelrod","New York",.1);

insert into Customer (CNM,CNAME,CITY,RATING,Sno) values
(201,"Hoffman","London",100,1001),
(202,"Giovanne","Roe",200,1003),
(203,"Liu","San Jose",300,1002),
(204,"Grass","Barcelona",100,1002),
(206,"Clemens","London",300,1007),
(207,"Pereira","Roe",100,1004);	

select * from Salseperson;

select SNAME, CITY from Salseperson where COMM>0.12 and CITY='London';

select SNAME,CITY from Salseperson where CITY in ("Barcelona","London");

select * from Salseperson
where COMM between 0.10 and 0.12;

select SNAME,COMM from Salseperson where COMM between 0.10 and 0.12;

select CNAME from Customer where RATING <=100 and CITY="Roe";
create database Prog4;

use Prog4;

create table data
(
	First_Name varchar(15),
    Last_Name varchar(15),
    Address text,
    City varchar(15),
    Age int
);

insert into data(First_Name,Last_Name,Address,City,Age) values
("Mickey","Mouse","123 Fantasy Way","Anaheim",73),
("Bat","Man","321 Cavern Ave","Gotham",54),
("Wonder","Woman","987 Truth Way","Paradise",39),
("Donald","Duck","555 Quack Street","Mallard",65),
("Bugs","Bunny","567 Carrot Street","Rascal",58),
("Wiley","Coyote","999 Acme Way","Canyon",61),
("Cat","Woman","234 Purrfect Street","Hairball",32),
("Tweety","Bird","543","Itotltaw",28);

select * from data;
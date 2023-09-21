#include<stdio.h>
#include<string.h>
void s1();
void u1();
void size();

struct employee1{
	int e_id; // 4byte
	char e_name[100]; // 100byte
	
	// struct size stored 104
};

union employee2{
	int emp_id; // 4byte
	char emp_name[100]; // 100byte
	
	// union size stored 100
};

void main()
{
	s1();
	u1();
	size();
}

void s1()
{
	struct employee1 s1;
	
	printf("Enter Id and Name For First Employee: \n");
	scanf("%d %s",&s1.e_id,&s1.e_name);
	
	printf("Name of Employee is:- %s and Id is:- %d",s1.e_name,s1.e_id);
	
	// You can print and scan simultaneously in Structure..
}

void u1()
{
	union employee2 u1;
	
	printf("\n\nEnter Id: \n"); 
	scanf("%d",&u1.emp_id);
	
	printf("Id is:- %d",u1.emp_id);
	
	printf("\n\nEnter Name: \n");
	scanf("%s",&u1.emp_name);
	
	printf("Name is:- %s",u1.emp_name);
	
	// Cannot print and scan simultaneously in union..
}

void size()
{
	struct employee1 s1;
	union employee2 u1;
	
	printf("\n\n%d is Size Of Structure",sizeof(s1)); // size for structure..
	printf("\n\n%d is Size Of Union",sizeof(u1)); // size for union..
}



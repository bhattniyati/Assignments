// Write a program of structure for five employee that provides the followinginformation -print and display empno, empname, address and age :


#include<stdio.h>

struct Employe{
	int e_no;
	char e_name[30];
	char e_address[30];
	int e_age;
};
void main()
{
	struct Employe emp[5];
	int i;
	
	for(i=1;i<=5;i++)
	{
		printf("\n Enter Details For %d Employee: \n",i);
		
		printf("\nEnter Employee Number:");
		scanf("%d",&emp[i].e_no);
		
		printf("\nEnter Employee Name:");
		scanf("%s",&emp[i].e_name);
		
		printf("\nEnter Employee Address:");
		scanf("%s",&emp[i].e_address);
		
		printf("\nEnter Employee Age:");
		scanf("%d",&emp[i].e_age);
	}
	
	printf("\n ------Employee Details is------:\n",i);
	for(i=0;i<5;i++)
	{
		printf("\nEmployee Number: %d",emp[i].e_no);
		printf("\nEmployee Name: %s",emp[i].e_name);
		printf("\nEmployee Address: %s",emp[i].e_address);
		printf("\nEmployee Age: %d",emp[i].e_age);
	}
	
}

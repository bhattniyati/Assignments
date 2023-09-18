#include<stdio.h>

struct employee{
	int emp_no;
	char emp_name[30];
	char emp_address[30];
	int emp_age;
};
	
int main()
{
	struct employee emp;
	
	printf("\nEmployee Details\n\n");
	
	printf("\nEnter Employee Number:");
	scanf("%d",&emp.emp_no);
	printf("\nEnter Employee Name:");
	scanf("%s",&emp.emp_name);
	printf("\nEnter Employee Address:");
	scanf("%s",&emp.emp_address);
	printf("\nEnter Employee Age:");
	scanf("%d",&emp.emp_age);
	
	printf("\nEmployee Detail is:");
	printf("\nEmployee Number: %d",emp.emp_no);
	printf("\nEmployee Name: %s",emp.emp_name);
	printf("\nEmployee Address: %s",emp.emp_address);
	printf("\nEmployee Age: %d",emp.emp_age);
	return 0;
}

//WAP to print factorial of given number:

#include<stdio.h>

void main()
{
	int i,number,fact=1;
	
	printf("Enter Number:");
	scanf("%d",&number);
	
	for(i=1;i<=number;i++)
	{
		fact=fact*i;
	}
	printf("%d is factorial of %d",fact,number);
}

// WAP to print table up to given numbers :

#include<stdio.h>

void main()
{
	int num,i;
	
	printf("Enter Number:\n \n");
	scanf("%d",&num);
	
	printf("Multiplication of Number\n");
	
	for(i=1;i<=10;i++)
	{
		printf("\n %d*%d=%d",num,i,num*i);
	}
}

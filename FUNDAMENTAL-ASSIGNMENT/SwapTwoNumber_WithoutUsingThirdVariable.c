// WAP to swap two numbers without using third variable:

#include<stdio.h>

void main()
{
	int n1,n2;
	printf("Enter Two Numbers:\n");
	scanf("%d %d", &n1,&n2);
	
	printf("\n Before Swap Values Are n1:%d, n2:%d",n1,n2);
	n1=n1+n2; 
	n2=n1-n2; 
	n1=n1-n2; 
	
	printf("\n After Swap Values Are \t n1:%d, n2:%d",n1,n2);
}


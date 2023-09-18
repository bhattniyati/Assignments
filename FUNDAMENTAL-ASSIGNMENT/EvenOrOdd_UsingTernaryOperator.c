//WAP to find number is even or odd using ternary operator :

#include<stdio.h>

void main()
{
	int num;
	
	printf("Enter Number:");
	scanf("%d",&num);
	
	(num%2==0)?printf("Even Number"):printf("Odd Number");
}

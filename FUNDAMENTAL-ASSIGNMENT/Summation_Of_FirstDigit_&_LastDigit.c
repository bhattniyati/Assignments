//Write a program you have to make a summation of first and last Digit :

#include<stdio.h>

void main()
{
	int num,sum=0,firstdigit,lastdigit;
	
	printf("Enter Number:");
	scanf("%d",&num);
	
	lastdigit=num%10; // 1234 = 4  num=123   
	while(num>=10) // 123 , 12  
	{
		num=num/10; // 123/10= n=12  r=3   12/10 = n=1 r=2
	} 
	firstdigit=num; // 
	sum=firstdigit+lastdigit; 
	
	printf("Sum of First and Last Digit = %d",sum);
}

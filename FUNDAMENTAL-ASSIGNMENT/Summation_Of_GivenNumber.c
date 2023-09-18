//Write a program make a summation of given number :

#include<stdio.h>

void main()
{
	int number,i,rem,sum=0;
	
	printf("Enter Number:");
	scanf("%d",&number);
	
	int temp=number;
	while(number!=0)
	{
		rem=number%10;  //3
		sum=sum+rem;  
		number=number/10;  //152
	}
	printf("%d is summation of number %d",temp,sum);
}

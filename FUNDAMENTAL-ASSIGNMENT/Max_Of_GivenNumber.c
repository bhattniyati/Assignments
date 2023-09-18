//Write a program to find out the max from given number :

#include<stdio.h>

void main()
{
	int num,i,rem,large=0;
	
	printf("Enter Number:");
	scanf("%d",&num);
	
	int temp=num;
	while(num!=0)
	{
		rem=num%10; 
		if(rem>large)  
		{
			large=rem;  
		}
		num=num/10;
	}
	printf("%d is largest digit from %d",large,temp);
}

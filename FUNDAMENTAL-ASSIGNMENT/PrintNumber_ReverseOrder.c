//WAP to print number in reverse order :

#include<stdio.h>

void main()
{
	int number,i,rem,rev=0;
	
	printf("Enter Number:");
	scanf("%d",&number);
	
	int temp=number;
	while(number!=0)
	{
		rem=number%10;  
		rev=rev*10+rem;
		number=number/10;
	}
	printf("Reverse of %d is %d",temp,rev);
	
}



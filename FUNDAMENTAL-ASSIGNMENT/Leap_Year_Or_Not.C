#include<stdio.h>

int main()
{
	int year,ans;
	printf("Enter The Year:");
	scanf("%d",&year);
	
	// LEAP YEAR IF PERFECTLY DIVISIBLE BY ZERO
	if(year % 400==0)
	{
		printf("%d is a leap year",year);
	}
	
	// LEAP YEAR IF NOT DIVISIBLE BY 100 BUT DIVISIBLE BY 4
	else if(year % 4==0)
	{
		printf("%d is a leap year",year);
	}
	
	// not a leap year if divisible by 100 but not divisible by 400
	else if(year % 100==0)
	{
		printf("%d is not a leap year",year);
	}
	
	// other years are not leap years
	else
	{
		printf("%d is not a leap year",year);
	}
	
	return 0;
}


// WAP to convert years into days and days into years:

#include<stdio.h>

int main()
{
	int days,year;
	printf("Enter The days:");
	scanf("%d",&days);
	
	year=days/365;
	printf("%d year\n",year);
	
	printf("Enter The Year:");
	scanf("%d",&year);

	days=year*365;
	printf("%d days\n",days);
	
	return 0;
}

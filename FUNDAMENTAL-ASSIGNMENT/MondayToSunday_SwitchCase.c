// Monday to Sunday using switch case:

#include<stdio.h>

void main()
{
	char Days;
	printf("Days:");
	scanf("%c",&Days);
	
	switch(Days)
	{
		case '1':
			printf("MONDAY");
			break;
			
		case '2':
			printf("TUESDAY");
			break;
			
		case '3':
			printf("WEDNESDAY");
			break;
			
		case '4':
			printf("THURSDAY");
			break;
			
		case '5':
			printf("FRIDAY");
			break;
			
		case '6':
			printf("SATURDAY");
			break;
			
		case '7':
			printf("SUNDAY");
			break;
			
		default:
			printf("Kindly Choice From Your Menu");
			break;
	}
}

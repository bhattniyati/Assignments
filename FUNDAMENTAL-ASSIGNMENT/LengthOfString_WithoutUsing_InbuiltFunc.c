#include<stdio.h>

void main()
{
	char s[100];
	int length,i;
	
	printf("Enter Your Name:\n");
	scanf("%s",&s);
	
	for(i=0;s[i] !='\0';i++)
	{
		length++;
	}
	
	printf("\nLength Of String is : %d",i);
}

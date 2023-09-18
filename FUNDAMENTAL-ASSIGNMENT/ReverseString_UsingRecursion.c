// WAP to find reverse of string using recursion :

#include<stdio.h>

void ReverseStr();
void main()
{
	printf("Enter A Name:\n\n");
	ReverseStr();
}

void ReverseStr()
{
	char c;
	scanf("%c",&c);
	
	if(c !='\n')
	{
		ReverseStr();
		printf("%c",c);
	}
}

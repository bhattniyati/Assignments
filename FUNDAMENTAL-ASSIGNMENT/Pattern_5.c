// Pattern 5:

#include<stdio.h>

void main()
{
	int i,j,temp=1;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d", temp++);
		}
		printf("\n");
	}
}
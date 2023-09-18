// Pattern 2:

#include<stdio.h>

int main()
{
	int i,j,temp=0;
	for(i=0;i<5;i++)
	{
		for(j=0;j<=i;j++)
		{
			printf("%c",'A'+temp++);
		}
		printf("\n");
	}
	return 0;
}

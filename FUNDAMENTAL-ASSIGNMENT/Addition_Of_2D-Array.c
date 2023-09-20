#include<stdio.h>

void main()
{
	int number[2][2],number2[2][2],result[2][2],i,j;
	
	printf("Enter 4 values for First Array:\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			scanf("%d",&number[i][j]);
		}
	}
	printf("\nEnter 4 values for Second Array:\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			scanf("%d",&number2[i][j]);
		}
	}
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			result[i][j]=number[i][j]+number2[i][j];
		}
	}
	printf("\nYour Result Array is:\n");
		for(i=0;i<2;i++)
		{
			for(j=0;j<2;j++)
			{
				printf("%d \t",result[i][j]);
			}
		printf("\n");
	}
}

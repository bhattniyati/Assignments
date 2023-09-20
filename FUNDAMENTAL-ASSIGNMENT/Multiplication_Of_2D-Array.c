#include<stdio.h>

void main()
{
	int number1[2][2],number2[2][2],result[2][2],i,j;
	
	printf("Enter 4 Values For First Array:");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			scanf("%d",&number1[i][j]);
		}
	}
	
	printf("First Array is:\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("%d\t",number1[i][j]);
		}
		printf("\n");
	}
	
	printf("Enter 4 Values For Second Array:");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			scanf("%d",&number2[i][j]);
		}
	}
	
	printf("Second Array is:\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("%d\t",number2[i][j]);
		}
		printf("\n");
	}
	
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			result[i][j]= number1[i][j] * number2[i][j];
		}
	}
	
	printf("Multiplication of Two Matrix is:\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("%d\t",result[i][j]);
		}
		printf("\n");
	}
}

#include<stdio.h>

void MaxNumber();
void main()
{
	MaxNumber();
}


void MaxNumber()
{
	int n,i,num[100];
	
	printf("How Many Elements You Enter?\n");
	scanf("%d",&n);
	
	printf("\nEnter Elements:\n");
	
	for(i=0;i<n;i++)
	{
		scanf("%d",&num[i]);
	}
	
	for(i=0;i<n;i++)
	{
		printf("%d",num[i]);
	}
	
	for(i=1;i<n;i++)
	{
		if(num[0]<num[i])
		{
			num[0]=num[i];
		}
	}
	
	printf("\n\nLargest From Array is:%d",num[0]);
}

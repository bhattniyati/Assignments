// Sum of odd numbers :

#include<stdio.h>

void main()
{
	int i,num,sum=0;
	
	printf("Enter The Number:\n");
	scanf("%d",&num);
	
	for(i=1;i<=num;i++)
	{
		if(i%2!=0)
		{
			printf("\n%d",i);
			sum=sum+i;
		}
	}
	printf("\nSum of odd number is:%d",sum);
}

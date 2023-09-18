// Sum of even numbers :

#include<stdio.h>

void main()
{
	int i,num,sum=0;
	
	printf("Enter The Number:\n");
	scanf("%d",&num);
	
	for(i=1;i<=num;i++)
	{
		if(i%2==0)
		{
			printf("\n%d",i);
			sum=sum+i;		
		}	
	}	
	printf("Sum of even number is:%d\n",sum);
}

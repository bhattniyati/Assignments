#include<stdio.h>

void main()
{
	int i,num,temp=0;
	
	printf("Enter the 10 Number:\n\n");
	for(i=1;i<=10;i++)
	{
		printf("Number%d\n",i);
		scanf("%d",&num);
		
		if(num%2==0)
		{
			temp++;
		}
	}
	printf("\n Total Even numbers are:%d\n\n",temp);
}

// WAP to take two Array input from user and sort them in ascending or descending order as per user’s choice :

#include<stdio.h>

void main()
{
	int number[100],n,i,j,temp;
	int ch;
	
	printf("1. Ascending order \n2. Descending order\n");
	printf("\nEnter Your Choice:\n");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:
			printf("How Many Elements You Want To Enter?\n");
			scanf("%d",&n);
			
			printf("\nEnter Elements:\n");
			for(i=0;i<n;i++)
			{
				scanf("%d",&number[i]);
			}
			
			printf("\nBefore Ascending Order Array is:\n");
			for(i=0;i<n;i++)
			{
				printf("%d\t",number[i]);
			}
		
			for(i=0;i<n;i++)
			{
				for(j=i+1;j<n;j++)
				{
					if(number[i]>number[j])
					{
						temp=number[i];
						number[i]=number[j];
						number[j]=temp;
					}
				}
				}	
				printf("\n\nAfter Ascending Order Array is:\n");
				for(i=0;i<n;i++)
			{
				printf("%d\t",number[i]);
			}
			break;
			
		case 2:
			printf("How Many Elements You Want To Enter?\n");
			scanf("%d",&n);
			
			printf("\nEnter Elements:\n");
			for(i=0;i<n;++i)
			{
				scanf("%d",&number[i]);
			}
			
			printf("\nBefore Descending Order Array is:\n");
			for(i=0;i<n;++i)
			{
				printf("%d\t",number[i]);
			}
		
			for(i=0;i<n;++i)
			{
				for(j=i+1;j<n;++j)
				{
					if(number[i]<number[j])
					{
						temp=number[i];
						number[i]=number[j];
						number[j]=temp;
					}
				}
				}	
				printf("\n\nAfter Descending Order Array is:\n");
				for(i=0;i<n;++i)
			{
				printf("%d\t",number[i]);
			}
			break;
			
		default:
			printf("\nInvalid Choice...");
			break;
	}
}

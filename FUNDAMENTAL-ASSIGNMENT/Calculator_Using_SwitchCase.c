// WAP of Addition, Subtraction, Multiplication and Division using Switch case.(Must Be Menu Driven):

#include<stdio.h>

void main()
{
	int no1,no2,ans,choice;
	

	printf("----------MENU----------");
	printf("\n 1. Addition \n 2. Substraction \n 3. Multiplication \n 4. Division");
	printf("\n\n\n Enter Your Choice :");
	scanf("%d",&choice);
	
		switch(choice)
		{
			case 1:
				printf("\nEnter First Number :",no1);
				scanf("%d", &no1);
				printf("\nEnter Second Number :",no2);
				scanf("%d",&no2);
				ans=no1+no2;
				printf("\n Addition = %d",ans);
				break;
					
			case 2:
				printf("\nEnter First Number :",no1);
				scanf("%d", &no1);
				printf("\nEnter Second Number :",no2);
				scanf("%d",&no2);
				ans=no1-no2;
				printf("\n Substraction = %d",ans);
				break;
			
			case 3:
				printf("\nEnter First Number :",no1);
				scanf("%d", &no1);
				printf("\nEnter Second Number :",no2);
				scanf("%d",&no2);
				ans=no1*no2;
				printf("\n Multiplication = %d",ans);
				break;
			
			case 4:
				printf("\nEnter First Number :",no1);
				scanf("%d", &no1);
				printf("\nEnter Second Number :",no2);
				scanf("%d",&no2);
				ans=no1/no2;
				printf("\n Division = %d",ans);
				break;
				
			default:
				printf("Invalid Choice !!!");
				break;
		} 
}

// WAP to make simple calculator (operation include Addition, Subtraction, Multiplication, Division, modulo) :

#include<stdio.h>

void main()
{
	int num1,num2,ans;
	char ch;
	printf("Enter + For Addition \n Enter - For Subtraction \n Enter * For Multiplication \n Enter / For Division \n");
	printf("Enter Your Choice:");
	scanf("%c",&ch);
	printf("Enter Two Numbers:");
	scanf("%d %d", &num1,&num2);
	
	switch(ch)
	{
		case '+':
			ans=num1+num2;
			printf("Addition of %d and %d is %d",num1,num2,ans);
			break;
			
		case '-':
			ans=num1-num2;
			printf("Subtraction of %d and %d is %d",num1,num2,ans);
			break;
			
		case '*':
			ans=num1*num2;
			printf("Multiplication of %d and %d is %d",num1,num2,ans);
			break;
			
		case '/':
			ans=num1/num2;
			printf("Division of %d and %d is %d",num1,num2,ans);
			break;
			
		case '%':
			ans=num1%num2;
			printf("Modulo of %d and %d is %d",num1,num2,ans);
			break;
			
		default:
			printf("kindly enter valid character");
	}
}

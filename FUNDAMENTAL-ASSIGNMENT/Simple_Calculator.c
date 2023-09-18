#include<stdio.h>

void main()
{
	int a=100,b=40,c;
	printf("Simple Calculator:\n");

	c=a+b;
	printf("\n\n Addition of %d and %d is %d",a,b,c);
	c=a-b;
	printf("\n\n Substraction of %d and %d is %d",a,b,c);
	c=a*b;
	printf("\n\n Multiplication of %d and %d is %d",a,b,c);
	c=a/b;
	printf("\n\n Division of %d and %d is %d",a,b,c);
	c=a%b;
	printf("\n\n Modulo of %d and %d is %d",a,b,c);
}

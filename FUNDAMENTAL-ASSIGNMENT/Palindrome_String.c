#include<stdio.h>

void main()
{
	int number, rev=0, rem, original;
	
	printf("Enter An Integer:\n");
	scanf("%d",&number);
	original = number;
	
	while (number != 0)
	{
		rem= number%10;
		rev= rev*10+rem;
		number= number/10; 
	}
	
	if(original == rev)
		printf("\n%d is a Palindrome...",original);
	
	else
		printf("\n%d is not a  Palindrome...",original);
}

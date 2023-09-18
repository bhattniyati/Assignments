// WAP to print Fibonacci series up to given numbers:

#include<stdio.h>

void main()
{
	int n1=0,n2=1,n3=n1+n2,i=1,end;
	
	printf("Enter How Many steps You Want?");
	scanf("%d",&end);
	printf("Fibonacci Series: %d\t %d\t %d\t",n1,n2,n3);
	
	while(i<=end-3)
	{
		n1=n2;
		n2=n3;
		n3=n1+n2;
		printf("%d\t",n3);
		i++;
	}	
}

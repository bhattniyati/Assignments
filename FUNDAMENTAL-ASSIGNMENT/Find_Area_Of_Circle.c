//WAP to find area of circle :
//Circle:-

#include<stdio.h>

void main()
{
	float r,pi=3.14,area;
	printf("Enter radius:");
	scanf("%f", &r);
	
	area=pi*r*r;
	printf("%0.2f area of circle is",area);
}

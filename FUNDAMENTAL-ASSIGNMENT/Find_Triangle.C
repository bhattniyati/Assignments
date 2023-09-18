//Triangle:-

#include<stdio.h>

int main()
{
	float hieght,base,area;
	printf("Enter Hieght and Base:");
	scanf("%f %f", &hieght,&base);
	
	area=0.5*hieght*base;
	printf("%0.2f area of triangle is",area);
	
	return 0;
}

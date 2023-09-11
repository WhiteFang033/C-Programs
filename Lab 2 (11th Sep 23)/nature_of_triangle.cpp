//Program to find nature of a triangle
#include <stdio.h>
int main()
{
	int a, b, c;
	
	//Taking sides of triangle as input 
	printf("Enter the sides of the triangle...\n");
	
	scanf("%d",&a);
	scanf("%d",&b);
	scanf("%d",&c);
	
	//Checking the sides of triangle
	if(a==b && b==c && c==a)
	{
		printf("The Triangle is Equilateral.");
	}
	else if(a==b || b==c || c==a)
	{
		printf("The Triangle is Isoceles.");
	}
	else
	{
		printf("The triangle is Scalen.");
	}
	
	return 0;
}

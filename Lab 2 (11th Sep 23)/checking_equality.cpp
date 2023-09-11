//Program to find whether three numbers are equal or not
#include <stdio.h>
int main()
{
	int a, b, c;
	
	//Taking input from the user
	printf("Enter three numbers...\n");
	scanf("%d", &a);
	scanf("%d", &b);
	scanf("%d", &c);
	
	
	//Checking if numbers are equal or not...
	
	if(a==b && b==c && c==a)
	{
		printf("Equal");
	}
	else
	{
		printf("Not Equal");
	}
	
	return 0;
}

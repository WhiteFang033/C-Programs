//Program to print greatest of three numbers
#include <stdio.h>
int main()
{
	int a, b, c;
	
	printf("Enter three numbers... \n");
	scanf("%d", &a);
	scanf("%d", &b);
	scanf("%d", &c);
	
	//Logic to find greatest of three numbers
	
	if(a>b && a>c)
	{
		printf("The greatest of the three numbers is : %d \n",a);
	}
	else if(b>c)
	{
		printf("The greatest of the three numbers is : %d \n",b);
	}
	else
	{
		printf("The greatest of the three numbers is : %d \n",c);
	}
	return 0;
}

//Program to help Raj win the cricket match
#include <stdio.h>
int main()
{
	int a, b, c;
	
	printf("Enter three numbers... \n");
	scanf("%d", &a);
	scanf("%d", &b);
	scanf("%d", &c);
	
	if(a>=b && a>=c)
	{
		printf("%d",a);
	}
	else if(b>=c)
	{
		printf("%d",b);
	}
	else
	{
		printf("%d",c);
	}
	
	return 0;
}
	

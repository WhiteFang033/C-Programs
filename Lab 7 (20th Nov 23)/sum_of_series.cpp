//Program to find nth term of the series using recursion
#include <stdio.h>
int series(int n, int a, int b, int c);

int main()
{
	int a1, a2, a3, term;
	printf("Enter the first three terms of the series respectively...\n");
	scanf("%d %d %d", &a1, &a2, &a3);
	printf("Enter the term to be calculated...\n");
	scanf("%d", &term);
	
	int result = series(term, a1, a2, a3);
	printf("The term is: %d \n", result);
}

int series(int n, int a, int b, int c)
{
	if(n==1)
		return a;
		
	else if(n==2)
		return b;
	
	else if(n == 3)
		return c;
	else
	return series(n-1, a, b, c) + series(n-2, a, b, c) + series(n-3, a, b, c);
}

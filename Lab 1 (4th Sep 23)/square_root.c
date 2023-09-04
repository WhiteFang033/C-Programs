//Program to find square root of a number
#include <stdio.h>
#include <math.h>
int main(){
	double num;
	printf("Enter a number... \n");
	scanf("%d",&num);
	
	double sqr = sqrt(num);
	printf("The square root of number is: %d", sqr);
	return 0;
}

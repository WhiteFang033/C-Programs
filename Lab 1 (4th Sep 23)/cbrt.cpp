//Program to find cube root of a number
#include <stdio.h>
#include <math.h>
int main(){
	double num;
	printf("Enter a number... \n");
	scanf("%lf",&num);
	
	double cbr = cbrt(num);
	printf("The cube root of number is: %lf\n", cbr);
	return 0;
}

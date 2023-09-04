/*Porgram to perfom Arithmetic Operations*/

#include <stdio.h>
int main(){
	int x, y, a, s, m, d;
	
	printf("Enter two numbers: ");
	scanf("%d", &x);
	scanf("%d", &y);
	
	a = x+y;
	s = x-y;
	m = x*y;
	d = x/y;
	
	printf("The addition of both the numbers is: %d", a);
	printf("The substraction of both the numbers is: %d", s);
	printf("The multiplication of both the numbers is: %d", m);
	printf("The division of both the numbers is: %d", d);
	return 0;
}

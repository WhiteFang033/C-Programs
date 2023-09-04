//Program to swap two numbers
#include <stdio.h>
int main(){
	int a , b , c;
	printf("Enter two numbers");
	scanf("%d", &a);
	scanf("%d", &b);


    printf("The original numbers are: %d and %d \n", a, b);

    //logic

	c = a;
	a = b;
	b = c;
	
	printf("The swapped numbers are: %d and %d", a, b);
	
	return 0;
}

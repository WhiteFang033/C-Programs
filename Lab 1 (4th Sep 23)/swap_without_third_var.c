//swap numbers without third variable
#include <stdio.h>
int main(){
	int a , b;
	printf("Enter two numbers ");
	scanf("%d", &a);
	scanf("%d", &b);


    printf("The original numbers are: %d and %d \n", a, b);
    
    	a = a*b;
    	b = a/b;
    	a = a/b;
    	
    	printf("The swapped numbers are: %d and %d", a, b);
    

    return 0;
}

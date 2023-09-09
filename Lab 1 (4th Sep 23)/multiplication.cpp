// Program to multiply two Floating Point numbers and displaying the result in both float and int
#include <stdio.h>
int main(){
    float num1, num2;
    
    // Taking input from the user
    printf("Enter two numbers... \n");
    scanf("%f %f", &num1, &num2);

    // Multiplying numbers
    float multi_f = num1 * num2;
    int multi_i = num1 * num2;

    // Displaying the results
    printf("The product of both the numbers in float is : %f \n", multi_f);
    printf("The product of both the numbers in int is : %d \n", multi_i);

    return 0;
}
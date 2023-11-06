//Program to find the lenght of a number
#include <stdio.h>
int main()
{
    int n, i = 0;
    printf("Enter a number...\n");
    scanf("%d", &n);

    while(n>0)
    {
        n = n/10;
        i++;
    }

    printf("The number of digits in the number is = %d", i);

    return 0;
}
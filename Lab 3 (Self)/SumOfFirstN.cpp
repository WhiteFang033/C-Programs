//Program to find sum of first n natural numbers
#include <stdio.h>
int main()
{
    int i, n, sum = 0;
    printf("Enter the number upto which the sum is to be calculated...\n");
    scanf("%d", &n);

    for(i=1; i<=n; i++)
    {
        sum = sum + i;
    }

    printf("The sum of first %d natural numbers is = %d", n, sum);

    return 0;
}
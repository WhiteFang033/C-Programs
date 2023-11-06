//Program to find reverse of a number
#include <stdio.h>
int main()
{
    int n, i = 1, rev_n = 0;

    printf("Enter a number to be reversed... \n");
    scanf("%d", &n);

    while(n>0)
    {
        rev_n= rev_n*10 + n%10;
        n = n/10;
    }

    printf("The reversed number is %d", rev_n);

    return 0;
}
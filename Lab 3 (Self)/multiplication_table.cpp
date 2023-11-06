//Program to print multiplication table of a number
#include <stdio.h>
int main()
{
    int n, terms;
    printf("Enter the number whose table should be printed...\n");
    scanf("%d", &n);

    printf("Enter the number of terms be printed...\n");
    scanf("%d", &terms);

    for( int i = 1; i<= terms; i++)
    {
        printf("%d x %d = %d \n", n, i, n*i);
    }

    return 0;

}
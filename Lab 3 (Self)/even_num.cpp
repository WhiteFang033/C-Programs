//Program to print Even numbers from 1 to n
#include <stdio.h>
int main()
{
    int n, i;
    printf("Enter the number of ODD numbers to be printed... \n");
    scanf("%d", &n);
    
    for(i = 1; i<=n; i++)
    {
        if((i%2) == 0)
        {
            printf("%d ", i);
        }
    }

    return 0;
}
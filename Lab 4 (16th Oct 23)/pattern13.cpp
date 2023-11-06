#include <stdio.h>
int main()
{
    int i, j, k, n, c;

    printf("Enter at number of rows to be printed...\n");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (i<5 && (j <= i || j >= (n - i - 1)))
                printf("* ");
//            else if (i>=5 && (j >= i || j <= (n - i - 1)))
//                printf("* ");
//            else
//                printf("  ");
        }
        printf("\n");
    }

    return 0;
}

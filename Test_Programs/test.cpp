#include <stdio.h>
#include <math.h>
int main()
{
    int num, t = 0, n;
    // t to store no. of digits....
    // n to store the value of original number...

    printf("Enter a number...\n");
    scanf("%d", &num);
    n = num;
    while (n > 0)
    {
        n = n / 10;
        t++;
    }

    for (int i = t; i > 0; i--)
    {
        printf("%d \n", num%(int)(pow(10, i)+0.5));
    }
    return 0;
}
#include <stdio.h>
int main()
{
    char var;
    int test1 = printf("Enter a character or a digit. \n");
    int test2 = scanf("%c",&var);

    int test3 = printf("%d \n", var);
    printf("%d %d %d", test1, test2, test3);
    return 0;
}
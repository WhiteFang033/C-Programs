//Program to test a function
#include <stdio.h>
void printline();

int main()
{
    printline();
    printf("Hello World!\n");
    printline();
    return 0;
}

void printline()
{
    for(int i = 0; i<40; i++)
    {
        printf("-");
    }
    printf("\n");
}
//Program to identify whether the entered alphabet is in upper case or lower case
#include <stdio.h>
int main()
{
    int n;
    char ch;
    printf("Enter character....");
    scanf("%c", &ch);
    n = (int)ch;
    printf("%d", n);

    if(n>=65 && n<=90)
    {
        printf("The character entered is in Uppercase");
    }
    else if(n>=97 && n<=122)
    {
        printf("The character entered is in Lowercase");
    }
    else{
        printf("INVALID INPUT");
    }
    return 0;
}
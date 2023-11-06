//Program check whether a number is plaindrome or not
#include <stdio.h>
int main()
{
    int n, i = 1, rev_n = 0;
    printf("Enter a number to be checked for palindrome... \n");
    scanf("%d", &n);

    int t = n; //copying value of n in t to perfom operations

    while(t>0)
    {
        rev_n = rev_n*10 + t%10;
        t = t/10;
    }
    printf("%d \n", rev_n);

    if(n == rev_n)
    {
        printf("It is a palindrome number.");
    }
    else{
        printf("It is not a palindrome number.");
    }

    return 0;
}
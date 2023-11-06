//Program to identify whether the entered character is a vowel or consonent
#include <stdio.h>
#include <ctype.h>
int main()
{
    char ch; 
    printf("Enter a alphabetic character... \n");
    scanf("%c", &ch);

    if(isalpha(ch))
    {
        char chl = tolower(ch);
        if(chl == 'a' || chl == 'e' || chl == 'i' || chl == 'o' || chl == 'u')
        {
            printf("The character is a vowel. \n");
        }
        else{
            printf("The character is a consonent. \n");
        }
    }
    else
    {
        printf("INVALID INPUT");
    }

    return 0;
}
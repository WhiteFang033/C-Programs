//Program to print vowels in the string...
#include <stdio.h>
#include <string.h>
int main()
{
	char str[100];
	printf("Enter a string...\n");
	gets(str);
	int i;
	
	for(i=0; i<strlen(str); i++)
	{
		if(str[i] == 'A' || str[i] == 'a' || str[i] == 'E' || str[i] == 'e' || str[i] == 'I' || str[i] == 'i' || str[i] == 'O' || str[i] == 'o' || str[i] == 'U' || str[i] == 'u')
		{
			printf("%c ", str[i]);
		}
	}
	
	return 0;
}

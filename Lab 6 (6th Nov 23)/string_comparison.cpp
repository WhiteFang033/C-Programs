//Program to compare two strings
#include <stdio.h>
#include <string.h>
int main()
{
	char str1[100], str2[100];

	printf("Enter a string...\n");
	gets(str1);
	printf("Enter another string...\n");
	gets(str2);

	
	if(strcmp(str1, str2))
	{
		printf("The strings are not equal...\n");
	}
	else{
		printf("The strings are equal...\n");
	}
	
	return 0;
}

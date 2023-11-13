//Program to check weather the given string is palindrome or not
#include <stdio.h>
#include <string.h>
int main()
{
	char str[100], rev_str[100];
	printf("Enter a string...\n");
	gets(str);
	
	int n, i;
	
		
	for(n=0; str[n] != '\0'; n++);
	
	for(i=0; i<n; i++)
	{
		rev_str[i] = str[n-i-1];
	}
	
	rev_str[n] = '\0'; //Manually putting null character at the end
	
	if(strcmp(str, rev_str))
	{
		printf("The string is not palindrome...\n");
	}
	else{
		printf("The string is palindrome...\n");
	}
	
	return 0;
}

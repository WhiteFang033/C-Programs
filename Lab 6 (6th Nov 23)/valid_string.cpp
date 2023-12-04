//Program to check whether the string is valid or not
#include <stdio.h>
#include <string.h>
int main()
{
	char str[100];
	printf("Enter a string...\n");
	scanf("%[^\n]s", str);
	int n = strlen(str);
	
	char start = str[0];
	char end = str[n-1];
	
	if((start == '(' && end == ')') || (start == '{' && end == '}') || (start == '<' && end == '>') || (start == '[' && end == ']'))
	{
		printf("The string is valid...\n");
	 }
	 else{
	 	printf("The string is not valid...\n");
	 }
	 
	 return 0;
}

//Program to remove white spaces from a given string
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char* remover(char*, int);
int main()
{
	int i, j ,n;
	char* str = (char*)calloc(100,sizeof(char));
	printf("Enter the string: ");
	scanf("%[^\n]s", str);
	
	for(i=0; i<strlen(str);i++)
	{
		if(str[i] == ' ')
		{
			str = remover(str,i);
			i--;
		}
	}
	
	printf("All the white spaces removed:\n");
	printf("%s",str);
	return 0;
}

char* remover(char* string, int n)
{
	for(int i=n; i<strlen(string); i++)
	{
		string[i]= string[i+1];
	}
	
	return string;
}

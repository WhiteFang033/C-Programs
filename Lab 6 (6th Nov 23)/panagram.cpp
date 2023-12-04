//Program to find whether the string is panagram or not
#include <stdio.h>
#include <string.h>
int main()
{
	char str[100];
	int i, j, flag=0, result;
	printf("Enter a string...\n");
	scanf("%[^\n]s", str);
	
	for(i=97; i<123;i++)
	{
		for(j=0; j<strlen(str); j++)
		{
			if(i == str[j])
			{
				flag++;
			}
		}
	}
	if(flag >=26)
	{
		printf("The string is a panagram\n");
	}
	else
	{
		printf("The string is not a panagram\n");
	}
	
	return 0;
}

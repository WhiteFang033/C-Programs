//Program to sort string
#include <stdio.h>
#include <string.h>
int main()
{
	int i, j, n;
	char str[100], temp;
	printf("Enter a string: ");
	scanf("%[^\n]s", str);
	
	for(i=0; i<strlen(str); i++)
	{
		for(j=0; j<strlen(str) - i -n; j++)
		{
			if(str[j]-str[j+1]>0)
			{
				temp = str[j];
				str[j]=str[j+1];
				str[j+1] = temp;
			}
		}
	}
	
	printf("The sorted string is...\n");
	printf("%s", str);
	
	return 0;
}

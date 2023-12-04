//Program to find the lengthiest of the word
#include <stdio.h>
#include <string.h>
int main()
{
	char str[100], table[50][50];
	int i, j, k=0, c=0, max=0, length, position;
	
	printf("Enter a string...\n");
	scanf("%[^\n]s", str);
	
	for(i=0; i<strlen(str); i++)
	{
		if(str[i] == ' ' || str[i] == '\0')
		{
			table[k][c] = '\0';
			c=0;
			
			if(i != strlen(str)-1)
			  	k++;	
		}
		else
		{
			table[k][c] = str[i];
			c++;
		}
	}
	
	for(i=0; i<k+1; i++)
	{
		length = strlen(table[i]);
		if(length>max)
		{
			max = length;
			position = i;
		}
	}
	
	printf("The longest word is %s with %d characters", table[position], max);
	return 0;
}

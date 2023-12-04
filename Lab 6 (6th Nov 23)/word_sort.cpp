//Program to sort the words in given array
#include <stdio.h>
#include <string.h>
int main()
{
	char str[100], table[50][50], temp[50];
	int i, j, k=0, c=0;
	
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
		for(j=0;j<k-i;j++)
		{
			if(strcmp(table[j],table[j+1])>0)
			{
				strcpy(temp,table[j]);
				strcpy(table[j],table[j+1]);
				strcpy(table[j+1],temp);
				
			}
		}
	}
	
	for(i=0; i<k+1; i++)
	{
		printf("%s\n", table[i]);
	}
	return 0;
}

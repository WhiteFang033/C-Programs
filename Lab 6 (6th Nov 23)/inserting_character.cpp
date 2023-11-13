//Program to insert a given character at a given positing
#include <stdio.h>
#include <string.h>
int main()
{
	char str[100], ch, temp;
	int index, i;
	printf("Enter a string...\n");
	gets(str);
	printf("Enter the character to be inserted...\n");
	scanf("%c", &ch);
	printf("Enter the index at which the character is to be inserted...\n");
	scanf("%d", &index);
	int n = strlen(str);
	
	for(i=n; i>index; i--)
	{
		str[i] = str[i-1];
	}
	
	str[index] = ch;
	str[n+1] = '\0';
	
	printf("Character %c inserted at index %d\n", ch, index);
	puts(str);
	return 0;
}

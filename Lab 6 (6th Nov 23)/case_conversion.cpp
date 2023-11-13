//Program to convert a string from UpperCase to LowerCase without using inbuilt function
#include <stdio.h>
int main()
{
	char str[100];
	printf("Enter a string in Uppercase...\n");
	scanf("%[^\n]", str);
	
	int n, i;
	for(n=0; str[n] != '\0'; n++);
	
	for(i=0; i<n; i++)
	{
		if(str[i] == ' ')
			continue;
		str[i] = (char)(str[i]+32);
	}
	
	printf("The string is converted into lowercase...\n");
	puts(str);
	
	return 0;
	
}

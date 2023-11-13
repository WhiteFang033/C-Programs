//Program to reverse a string
#include <stdio.h>
int main()
{
	char str[100], t;
	int i, n;
	printf("Enter a string...\n");
	gets(str);
	
	for(n=0; str[n] != '\0'; n++);
	
	for(i=0; i<n/2; i++)
	{
		t = str[i];
		str[i] = str[n-i-1];
		str[n-i-1] = t;
	}
	
	printf("The reversed string is...\n\n");
	puts(str);
}

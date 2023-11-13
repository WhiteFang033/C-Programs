#include <stdio.h>
int main()
{
	char str1[100];
	char str2[100];
	int n, i;
	
	printf("Enter a string of characters...\n");
	scanf("%[^\n]", str1);
	
	for(n=0; str1[n] != '\0'; n++);
	
	for(i=0; i<n; i++)
	{
		str2[i] = str1[i];
	}
	
	str2[n] = '\0'; //Inserting null character manually
	
	printf("The string copied...\n");
	printf("%s", str2);
	
	return 0;
}

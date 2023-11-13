#include <stdio.h>
int main()
{
	char str[100];
	printf("Enter a string...\n");
	scanf("%[^\n]", str);
	int i;
	
	for(i=0; str[i] != '\0'; i++);
	
	printf("The length of the string is %d\n", i);
	
	return 0;
}

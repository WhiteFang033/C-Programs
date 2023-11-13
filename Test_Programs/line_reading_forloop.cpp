//reading line using getchar function itegrated with for loop
#include <stdio.h>
int main()
{
	char line[100], character;
	int i;
	
	printf("Enter something asap...\n");
	
	for(i = 0; character != '\n'; i++)
	{
		character = getchar();
		line[i] = character;
	}
	
	line[i-1] = '\0';
	printf("\n%s\n", line);
	
	return 0;
}

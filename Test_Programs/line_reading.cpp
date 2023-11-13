//test program to enter a line from the terminal
#include <stdio.h>
int main()
{
	char line[100], character;
	int c = 0;
	
	do{
		character = getchar();
		line[c] = character;
		c++;
	}
	while(character != '\n');
	
	c = c-1;
	line[c] = '\0';
	printf("\n%s\n", line);
}

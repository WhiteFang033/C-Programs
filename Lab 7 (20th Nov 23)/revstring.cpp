//Program to print string in reverse using pointers
#include <stdio.h>
#include <string.h>
int main()
{
	char name[100] = "Shashank K";
	char *ptr = name;
	
	for(int i = strlen(name)-1; i>=0; i--)
	{
		printf("%c", ptr[i]);
	}
	return 0;
}

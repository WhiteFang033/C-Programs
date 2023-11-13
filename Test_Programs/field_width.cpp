//Testing field width
#include <stdio.h>
int main()
{
	char str[100] = "Nothing is True, Everything is Permitted";
	
	printf("%-50.40s", str);
	return 0;
}

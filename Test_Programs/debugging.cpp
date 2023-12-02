#include <stdio.h>
#include <string.h>
int main()
{
	char *p1 = "Vinay", *p2;
	p2 = p1;
	p1 = "Raj";
	printf("%s %s", p1, p2);
	return 0;
}


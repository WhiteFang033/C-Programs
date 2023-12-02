#include <stdio.h>
int main()
{
	struct size{
		short s;
		short b;
		int i;
		long l;
	} var[10];
	
	printf("%d", sizeof(var));
}

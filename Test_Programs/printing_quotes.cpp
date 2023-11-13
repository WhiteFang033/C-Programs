#include <stdio.h>
int main()
{
	char str[30];
	scanf("%[^over]", str);
	printf("%s", str);
}

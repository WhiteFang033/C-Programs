#include <stdio.h>
int main()
{
	int a[]= {001, 010, 020, 0144};
	
	
	//0x[number] for hexadecimal
	//binary 4 digits 0s and 1s
	//0[number] for octal
	

	int i;
	for(i=0; i<4; i++)
	{
		printf("a[%d] = %d\n",i, a[i]);
	}
	return 0;
}

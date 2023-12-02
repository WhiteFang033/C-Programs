#include <stdio.h>
int main()
{
	FILE *fp;
	fp = fopen("files/created.py", "w");
	
	fprintf(fp,"%s","a=7\nb=13\nc=a*b\nprint(c)\n");
	fclose(fp);
	return 0;
}

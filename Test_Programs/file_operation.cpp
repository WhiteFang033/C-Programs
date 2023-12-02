//Program to create a file 
#include <stdio.h>
int main()
{
	FILE *fp, *fp2;
	char str[100], content[100], ch;
	
	fp = fopen("files/sourceFile.txt", "a");
	fp2 = fopen("files/content.txt","r");
	
	while((ch = getc(fp2)) != EOF)
	{
		putc(ch, fp);
	}
	printf("Content Appended Successfully");
	
	return 0;

}

#include <stdio.h>
#include <string.h>
int main()
{
	int i;
	char str1[]= "Bread Butter";
	char str2[]= " And Jam.";
//	char str1[100];
//	char str2[100];
//	
//	printf("Enter a String: \n");
//	scanf("%[^\n]", str1);
//	
//	printf("Enter another String: \n");
//	scanf("%[^\n]", str2);
	
	int n1= strlen(str1);
	int n2= strlen(str2);
	int n3 = n1+n2-3;
	char str3[n3];
	
	//Concatinating Strings
	
	for(i=0; i<(n1 + n2); i++)
	{
		if(i<n1)
		{
			str3[i] = str1[i];
		}
		else if(i>=n1)
		{
			str3[i] = str2[i-n1];
		}
	}
	
	printf("The concatinated String is... \n");
	printf("%s",str3);
	
	return 0;
}

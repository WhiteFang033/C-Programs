//Sorting the table of strings
#include <stdio.h>
#include <string.h>
int main()
{
	char cities[7][100] = {
				"Lucknow",
				"Kanpur",
				"Delhi",
				"Unnao",
				"Tiruchirappalli",
				"Chennai",
				"Hyderabad"
	};
	
	char dummy[100];
	int i, j;
	
	//Sorting
	for(i=0; i<7; i++)
	{
		for(j=0; j< 7-i-1; j++)
		{
			if(strcmp(cities[j], cities[j+1]) > 0)
			{
				strcpy(dummy, cities[j]);
				strcpy(cities[j], cities[j+1]);
				strcpy(cities[j+1], dummy);
			}
		}
	}
	
	//Sorted Table
	for(i=0; i<7; i++)
	{
		puts(cities[i]);
		printf("\n");
	}
}

//Program to display next date of the given date
#include <stdio.h>
int main()
{
	int y, m, d;
	
	//Taking input from the user
	printf("Enter the year, month and date respectively... \n");
	scanf("%d", &y);
	scanf("%d", &m);
	scanf("%d", &d);
	
	if( d == 30 || d == 31 || d == 28 || d == 29)
	{
		if(m!=2)
		{
			if(m == 12)
			{
				printf("%d / %d / %d",1,1,y+1);
			}
			else{
				printf("%d / %d / %d",1,m+1,y);
			}
		}
		else if(m == 2)
		{
			if(year%4==0 &&(year%100 !=0 || year%400 ==0))
	        {
		      	printf("The year %d is a leap year.\n", year);
	  		}
			else
			{
				printf("The year %d is not a leap year.\n", year);
			}
			printf("%d / %d / %d",1,m+1,y);
		}
	}
	
}

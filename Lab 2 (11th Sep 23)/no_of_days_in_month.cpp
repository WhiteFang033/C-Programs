//Program to print number of days in a month
#include <stdio.h>
int main()
{
	int year, month;
	
	//Taking input from the user
	printf("Enter the year and month respectively... \n");
	scanf("%d", &year);
	scanf("%d", &month);
	
	//Logic
	if(month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
	{
		printf("There are 31 days in the month");
	}
	else if(month == 4 || month == 6 || month == 9 || month == 11)
	{
		printf("There are 31 days in the month");
	}
	else if(month ==2)
	{
		if(year%4==0 &&(year%100 !=0 || year%400 ==0))
	    {
		printf("There are 29 days in the month");
	    }
	    else
	    {
		printf("There are 28 days in the month");
	    }
	}
	
	return 0;
}

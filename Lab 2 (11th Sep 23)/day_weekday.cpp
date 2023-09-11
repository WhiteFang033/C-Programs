//Program to input day number and print weekday
#include <stdio.h>
int main()
{
	int day_number;
	
	//taking input from the user...
	printf("Enter the day number...");
	scanf("%d", &day_number);
	
	//Logic
	if(day_number == 1)
	{
		printf("Monday");
	}
	else if(day_number == 2)
	{
		printf("Tuesday");
	}
	else if(day_number == 3)
	{
		printf("Wednesday");
	}
	else if(day_number == 4)
	{
		printf("Thrusday");
	}
	else if(day_number == 5)
	{
		printf("Friday");
	}
	else if(day_number == 6)
	{
		printf("Saturday");
	}
	else if(day_number == 7)
	{
		printf("Sunday");
	}
	
	return 0;
}

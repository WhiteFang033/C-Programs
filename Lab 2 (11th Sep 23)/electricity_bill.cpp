//Program to calculate electricity bill
#include <stdio.h>
int main()
{
	int units;
	double bill_amount;
	
	//Taking input from the user
	printf("Enter the units consumed...\n");
	scanf("%d", &units);
	
	
	//calculating bill
	if(units>=0 && units<100)
	{
		bill_amount = units * 3.5;
	}
	else if(units>=100 && units<250)
	{
		bill_amount = units * 5;
	}
	else if(units>=250 && units<500)
	{
		bill_amount = units * 7.5;
	}
	else if(units>=500)
	{
		bill_amount = units * 10;
	}
	
	printf("The Electricity Bill Amount is : %lf \n", bill_amount);
	
	return 0;
}

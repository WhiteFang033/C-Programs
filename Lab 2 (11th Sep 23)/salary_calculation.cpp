//Program to calculate salary of an employee
#include <stdio.h>
int main()
{
	int city_tier;
	double basic_salary, final_salary, hra, da;
	
	//Taking input from the user
	printf("Enter the basic salary of the employee...\n");
	scanf("%lf", &basic_salary);
	
	printf("Enter the tier of the city...\n");
	scanf("%d", &city_tier);
	
	//calculating daily allowance
	da = basic_salary * 0.15;
	
	printf("%d da", da);
	
	//calculating house rent allowance
	if(city_tier == 1)
	{
		hra = basic_salary * 0.4;
	}
	else if(city_tier == 2)
	{
		hra = basic_salary * 0.3;
	}
	else if(city_tier == 3)
	{
		hra = basic_salary * 0.25;
	}
	else
	{
		printf("INVALID INPUT\n");
	}
	
	//calculating final salary
	final_salary = basic_salary + da + hra;
	
	printf("The final salary of the employee is : %lf", final_salary);
	
	return 0;
}

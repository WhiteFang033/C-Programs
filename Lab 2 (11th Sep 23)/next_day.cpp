//Program to display next date of the given date
#include <stdio.h>
int main()
{
	int y, m, d;
	
	//Taking input from the user
	printf("Enter the date, month and year respectively... \n");
	scanf("%d", &d);
	scanf("%d", &m);
	scanf("%d", &y);
	
	if( d == 30 || d == 31 || d == 28 || d == 29)  //Checking for ending dates
	{
		if(d==30 &&(m == 4 || m == 6 || m == 9 || m == 11)) //Checking for months with 30 days
		{
			printf("%d / %d / %d",1,m+1,y);
		}
		else if(d==31 &&(m == 1 ||  m == 3|| m == 5 || m == 7 || m == 8 || m == 10)) //Checking for months with 31 days
		{
			printf("%d / %d / %d",1,m+1,y);
		}
		else if(d == 31 && m == 12) //Checking for December separately
		{
			printf("%d / %d / %d",1,1,y+1);
		}
		else if(m == 2) //Checking for Feburary
		{
			if(y%4==0 &&(y%100 !=0 || y%400 ==0)) //Checking for Leap Year
	        {
		      	if(d == 28)
				{
					printf("%d / %d / %d", d+1,m,y);
				}
				else if(d == 29)
				{
					printf("%d / %d / %d", 1,m+1,y);
				}
	  		}
			else
			{
				if(d == 28)
				{
					printf("%d / %d / %d", 1,m+1,y);
				}
			}
		}
		else //Nothing Matched then just increasing the day by 1
		{
			printf("%d / %d / %d",d+1,m,y);
		}
	}
	else{
		printf("%d / %d / %d",d+1,m,y);
	}
	
}

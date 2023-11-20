//Program to pass array to a function and find the average of the array elements
#include <stdio.h>
double average(int arr[]);

int main()
{
	int arr[10]= {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	
	double av = average(arr);
	
	printf("The average of array elements is %lf\n",av);
}

double average(int a[])
{
	int sum = 0;
	for(int i = 0; i<10; i++)
	{
		sum = sum +a[i];
	}
	
	double avg = sum/10.0;
	return avg; 
}

//Program to find minimum and maximum element and average of values in array
#include <stdio.h>
int main()
{
	int n, i, min, max, sum =0;
	
	printf("Enter the length of the array...\n");
	scanf("%d", &n);
	
	int a[n];
	
	printf("Enter the values in array...\n");
	for(i=0; i<n; i++)
	{
		scanf("%d",&a[i]);
	}
	
	printf("Printing array\n");
	
	for(i=0; i<n; i++)
	{
		printf("%d, ",a[i]);
	}
	printf("\n");
	
	
	max = a[0];
	min = a[0];
	for(i=0; i<n; i++)
	{
	  if(min>a[i])
	  {
	  	min = a[i];
	  }
	  if(max<a[i])
	  {
	  	max = a[i];
	  }
	  
	  sum += a[i];
	}
	
	double avg = sum/n;
	
	printf("Minimum Value = %d \n", min);
	printf("Maximum Value = %d \n", max);
	printf("Average Value = %lf \n", avg);
	
	return 0;
}

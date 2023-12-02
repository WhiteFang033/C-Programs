//Program to find the largest element in an given array by allocating memory dynamically
#include <stdio.h>
#include <stdlib.h>
int main()
{
	int i, j, n, max=0;
	printf("Enter the size of array...\n");
	scanf("%d", &n);
	
	int *ptr = (int*)calloc(n, sizeof(int));
	
	printf("Enter the numbers in the array...\n");
	
	for(i=0; i<n; i++)
	{
		scanf("%d",ptr+i);
	}
	
	for(i=0; i<n; i++)
	{
		if(ptr[i] > max)
		{
			max = ptr[i];
		}
	}
	
	printf("The largest element in the array is: %d\n", max);
	return 0;
}

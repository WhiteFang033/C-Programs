//Swap adjacent elements in an array
#include <stdio.h>
int main()
{
	int i, t, n;
	printf("Enter the even value of n");
	scanf("%d", &n);
	
	int arr[n];
	printf("Enter the values in array...\n");
	
	for(i=0; i<n; i++)
	{
		scanf("%d", &arr[i]);
	}
	
	printf("Printing the array...\n");
	for(i=0; i<n; i++)
	{
		printf("%d ", arr[i]);
	}
	
	for(i=0; i<n; i++)
	{
		if(i%2==0)
		{
			t = arr[i];
			arr[i] = arr[i + 1];
			arr[i + 1] = t;	
		}
	}
	
	printf("Printing Swapped array...\n");
	for(i=0; i<n; i++)
	{
		printf("%d ", arr[i]);
	}
}

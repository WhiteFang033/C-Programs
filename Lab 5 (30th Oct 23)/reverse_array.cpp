//reversing the elements of an array
#include <stdio.h>
int main()
{
	int i, n, t;
	printf("Enter the size of the array");
	scanf("%d",&n);
	int arr[n];
	
	printf("Enter the values in the array...\n");
	for(i=0; i<n; i++)
		scanf("%d",&arr[i]);
	
	printf("Printing the array...\n");
	for(i=0; i<n; i++)
		printf("%d ",arr[i]);
	
	for(i=0; i<n/2; i++)
	{
		t= arr[i];
		arr[i] = arr[n-i-1];
		arr[n-i-1] = t;
	}
	
	printf("Printing the reversed array...\n");
	for(i=0; i<n; i++)
		printf("%d ",arr[i]);
	
	return 0;
}

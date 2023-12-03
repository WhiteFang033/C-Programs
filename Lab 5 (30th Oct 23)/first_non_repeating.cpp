//Program to find the first non-repeating element in the array
//At this point it has a bug...
#include <stdio.h>
int main()
{
	int i, j, n, k;
	printf("Enter the size of the array: ");
	scanf("%d", &n);
	
	int arr[n];
	
	printf("Enter the elements in the array...\n");
	
	for(i=0; i<n; i++)
	{
		scanf("%d", &arr[i]);
	}
	
	for(i=0; i<n; i++)
	{
		k=1;
		for(j=i+1; j<n; j++)
		{
			if(arr[i] == arr[j])
			{
				k++;
				arr[j] = -999;
			}
		}
		if(k == 1 && arr[i] != -999)
		{
			printf("The first non-repeating element in the array is: %d", arr[i]);
			break;
		}
	}
	return 0;
}

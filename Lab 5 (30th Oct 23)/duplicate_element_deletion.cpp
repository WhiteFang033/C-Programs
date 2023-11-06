//Program to delete duplicate numbers in an array
#include <stdio.h>
int main()
{
	int i, j, n, k = 0, c = 0;
	printf("Enter the size of the array...\n");
	scanf("%d",&n);
	int arr[n];
	
	printf("Enter the numbers in the array... \n");
	for(i=0; i<n; i++)
	{
		scanf("%d", &arr[i]);
	}
	
	printf("Printing the array... \n");
	for(i=0; i<n; i++)
	{
		printf("%d ", arr[i]);
	}
	
	for(i=0; i<n;i++)
	{
		for(j=i; j<n;j++)
		{
			if((arr[i] == arr[j]) && (i!=j) && (arr[i] != -999))
			{
				arr[i] = -999;
				c++;
			}
		}
	}
		
	int arr_new[c];
	
	if(c==0)
	{
		printf("No duplicate Elements in the array...\n");
	}
	else{
		for(i=0; i<n;i++)
		{
			if(arr[i] != -999)
			{
				arr_new[k]= arr[i];
				k++;
			}
		}
		
		printf("Printing the array... \n");
		
	    for(i=0; i<k; i++)
		{
			printf("%d ", arr_new[i]);
		}
	}
	
	return 0;
}

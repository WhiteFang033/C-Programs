//Program to find average exist in array or not
#include <stdio.h>
int main()
{
	int i, j, flag=0, x, n, avg;
	printf("Enter the size of the array: \n");
	scanf("%d", &n);
	
	int arr[n], res[n];
	printf("Enter the values in the array...\n");
	
	for(i=0; i<n; i++)
	{
		scanf("%d", &arr[i]);
	}
	
	printf("Enter the value of X: \n");
	scanf("%d", &x);
	
	for(i=0; i<n;i++)
	{
		avg = (x+arr[i])/2;
		
		for(j=0; j<n; j++)
		{
			if(avg == arr[j])
				flag++;
		}
		
		res[i] = flag;
		flag = 0;
	}
	
	for(i=0; i<n; i++)
	{
		printf("%d ", res[i]);
	}
	return 0;
}

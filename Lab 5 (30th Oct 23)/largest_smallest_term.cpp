//Program to Find Kth Largest and Kth Smallest term in array
#include <stdio.h>
int main()
{
	int n, i, j, t, k;
	
	printf("Enter the length of the array...\n");
	scanf("%d", &n);
	
	int a[n];
	
	printf("Enter the values in array...\n");
	for(i=0; i<n; i++)
	{
		scanf("%d",&a[i]);
	}
	
	//Sorting Array
	for(i=0; i<n; i++)
	{
		for(j=0; j<n-i-1; j++)
		{
			if(a[j]>a[j+1])
			{
				t = a[j];
				a[j] = a[j+1];
				a[j+1] = t;
			}
		}
	}
	
	printf("Enter the value of k...\n");
	scanf("%d",&k);
	
	printf("The k-th largest term is: %d\n", a[n-k]);
	printf("The k-th smallest term is: %d\n", a[k-1]);
	
	return 0;
}

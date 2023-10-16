#include <stdio.h>
int main()
{
	int i, j, k, n, m;
	
	printf("Enter the dimensions of array...\n");
	scanf("%d", &n);
	scanf("%d", &m);
	int a[n][m];
	int b[n][m];
	int c[n][m];
	
	printf("Enter the values in the first matrix...\n");
	
	for(i=0; i<n; i++)
		for(j=0; j<m;j++)
			scanf("%d",&a[i][j]);
			
	printf("Printing the matrix...\n");
	
	for(i=0; i<n; i++)
	{
		for(j=0; j<m;j++)
			printf("%d ",a[i][j]);
	
		printf("\n");
	}
	
	printf("Enter the values in the second matrix...\n");
	
	for(i=0; i<n; i++)
		for(j=0; j<m;j++)
			scanf("%d",&b[i][j]);
			
	printf("Printing the matrix...\n");
	
	for(i=0; i<n; i++)
	{
		for(j=0; j<m;j++)
			printf("%d ",b[i][j]);
	
		printf("\n");
	}
	
	//Adding both the matrix
	for(i=0; i<n; i++)
		for(j=0; j<m;j++)
			c[i][j] = a[i][j] + b[i][j];
			
	printf("Printing the addition matrix...\n");
	
	for(i=0; i<n; i++)
	{
		for(j=0; j<m;j++)
			printf("%d ",c[i][j]);
	
		printf("\n");
	}
	
	//Subtracting both the matrix
	for(i=0; i<n; i++)
		for(j=0; j<m;j++)
			c[i][j] = a[i][j] - b[i][j];
			
	printf("Printing the subtracted matrix...\n");
	
	for(i=0; i<n; i++)
	{
		for(j=0; j<m;j++)
			printf("%d ",c[i][j]);
	
		printf("\n");
	}
	return 0;
}

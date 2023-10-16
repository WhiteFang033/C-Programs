#include <stdio.h>
int main()
{
	int i, j, k, n;
	
	printf("Enter the dimension of square matrics...\n");
	scanf("%d", &n);

	int a[n][n];
	int b[n][n];
	int c[n][n];
	
	printf("Enter the values in the first matrix...\n");
	
	for(i=0; i<n; i++)
		for(j=0; j<n;j++)
			scanf("%d",&a[i][j]);
			
	printf("Printing the matrix...\n\n");
	
	for(i=0; i<n; i++)
	{
		for(j=0; j<n;j++)
			printf("%d ",a[i][j]);
	
		printf("\n");
	}
	
	printf("Enter the values in the second matrix...\n\n");
	
	for(i=0; i<n; i++)
		for(j=0; j<n;j++)
			scanf("%d",&b[i][j]);
			
	printf("Printing the second matrix...\n\n");
	
	for(i=0; i<n; i++)
	{
		for(j=0; j<n;j++)
			printf("%d ",b[i][j]);
	
		printf("\n");
	}
	
	//Multiplying both the matrices
	
	for(i=0; i<n; i++)
		for(j=0; j<n;j++)
		    for(k=0; k<n; k++)
			c[i][j] += a[k][i]*b[j][k];
	
	//printing the resultant matrix
	printf("Printing the resultant matrix...\n\n");
	for(i=0; i<n; i++)
	{
		for(j=0; j<n;j++)
			printf("%d ",c[i][j]);
	
		printf("\n");
	}
	return 0;
}
	

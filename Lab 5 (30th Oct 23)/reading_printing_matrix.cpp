#include <stdio.h>
int main()
{
	int i, j, k, n, m;
	
	printf("Enter the dimensions of array...\n");
	scanf("%d", &n);
	scanf("%d", &m);
	int a[n][m];
	
	printf("Enter the values of the matrix...\n");
	
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
	return 0;
}

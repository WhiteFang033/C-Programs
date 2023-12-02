#include <stdio.h>
#include <stdlib.h>
int main()
{
	int *ptr = (int *)calloc(10, sizeof(int));
	
	printf("Enter the numbers in the array\n");
	for(int i = 0; i<10; i++)
	{
		scanf("%d", &ptr[i]);
	}
	
	printf("Printing the elements of array\n");
	for(int i = 0; i<10; i++)
	{
		printf("%d ", ptr[i]);
	}
	
	printf("\nThe size of the array is: %d\n", sizeof(ptr));
	
	realloc(ptr,20);
	
	printf("\nThe reallocated size of the array is: %d\n", sizeof(ptr));
	
	free(ptr);
}

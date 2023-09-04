/*Program to calculate the area of a square*/
#include <stdio.h>
int main(){
	int side;
	printf("Enter the side length of the square.");
	scanf("%d", &side);
	
	int area = side*side;
	printf("Area of the square is: %d sq. units", area);
}

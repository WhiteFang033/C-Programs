/*Program to find the area of a circle*/
#include <stdio.h>
int main(){
	int radius;
	printf("Enter the radius of the circle. \n");
	scanf("%d", &radius);
	int area = (3.14*radius*radius);
	
	printf("The area of the circle is: %d", area);
	return 0;
}

/*Program to calculate the percentage of a student given the marks of 5 different subjects*/
#include <stdio.h>
int main(){
	int maths, phy, chem, eng, comp, percent;
	printf("Enter the marks of Maths, Physics, Chemistry, English, Computer, respectively.");
	scanf("%d", &maths);
	scanf("%d", &phy);
	scanf("%d", &chem);
	scanf("%d", &eng);
	scanf("%d", &comp);
	
	percent = (maths + phy + comp + eng + chem)/5;
	
	printf("The percentage is: %d", percent);
	return 0;
}

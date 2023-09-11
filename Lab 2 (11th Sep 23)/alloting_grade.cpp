//Program to caculate percentage of five subjects and allot grade accordingly...
#include <stdio.h>
int main()
{
	int phy, chem, maths, bio, comp;
	double percentage;
	char grade;
	
	//Taking input from the user
	printf("Enter the marks obtained in Physics, Chemistry, Maths, Biology and Computer respectively...");
    scanf("%d", &phy);	
    scanf("%d", &chem);
    scanf("%d", &maths);
    scanf("%d", &bio);
    scanf("%d", &comp);
    
    //calculating percentage
    
    percentage = (phy + chem + maths + bio + comp)/5.0;
    
    //Alloting Grade
    
    if(percentage>= 90)
    {
    	grade = 'A';
	}
	else if(percentage<90 && percentage>= 80)
    {
    	grade = 'B';
	}
	else if(percentage<80 && percentage>= 70)
    {
    	grade = 'C';
	}
	else if(percentage<70 && percentage>= 60)
    {
    	grade = 'D';
	}
	else if(percentage<60 && percentage>= 40)
    {
    	grade = 'E';
	}
	else if(percentage<40)
    {
    	grade = 'F';
	}
	
	//Printing Results
	
	printf("Grade %c alloted with respect to percentage %lf.\n",grade, percentage);
	
	return 0;
}

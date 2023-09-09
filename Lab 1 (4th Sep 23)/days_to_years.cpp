//Program to convert Days into Years
#include <stdio.h>
int main(){
    int days;
    double years;

    //Taking input from the user
    printf("Enter the number of days... \n");
    scanf("%d", &days);

    //Converting days into Years
    years = days / 365;

    //Displaying Results
    printf("%d days equals to %lf in years. \n",days, years);

    return 0;
}
// Program to calculate Simple and Compound Interest
#include <stdio.h>
#include <math.h>
int main()
{
    double principal, rate;
    int time;

    //Taking input from the user
    printf("Enter the principal amount... \n");
    scanf("%lf", &principal);

    printf("Enter the rate in %%... \n");
    scanf("%lf", &rate);

    printf("Enter the time in years... \n");
    scanf("%d", &time);

    //Calculatin Simple Interest
    double s_interest = (principal * rate * time) / 100;
    double si_final_amount = principal + s_interest;

    //Calcuating Compound Interests
    double ci_final_amount = principal * pow((1 + rate / (time * 100)), rate * time);
    double c_interest = ci_final_amount - principal;

    //Displaying Results
    printf("The simple interest is: %lf \n and the Final SI Amount is: %lf \n\n", s_interest, si_final_amount);
    printf("The compound interest is: %lf \n and the Final SI Amount is: %lf \n\n", c_interest, ci_final_amount);
    return 0;
}
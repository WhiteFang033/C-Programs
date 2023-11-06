//Program to conver decimal number into binary
#include <stdio.h>
#include <math.h>
int main()
{
    int dec, i=0;
    float bin = 0.0;

    printf("Enter a number to be converted into binary... \n");
    scanf("%d", &dec);

    while(dec>0)
    {
        bin = bin + (dec%2)*pow(10, i);
        dec /= 2;
        i++;
    }
    printf("%f \n", bin);
    return 0;
}
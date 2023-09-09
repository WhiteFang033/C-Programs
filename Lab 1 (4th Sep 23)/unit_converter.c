    // Program to convert Kilometers into Meters, Centimeters and Millimeters
    #include <stdio.h>
    int main()
    {
        long long int dis_km, dis_m, dis_cm, dis_mm;
        printf("Enter distance in Kilometers... \n");
        scanf("%lld", &dis_km);
        printf("%lld", dis_km);
        // Converting Km into other units
        dis_m = dis_km * 1000;
        dis_cm = dis_km * 100000;
        dis_mm = dis_km * 1000000;

        printf("The distance in meters is %lld \n", dis_m);
        printf("The distance in centimeters is %lld \n", dis_cm);
        printf("The distance in millimeters is %lld \n", dis_mm);
        
        return 0;
    }
/*Program 2: Fahrenheit-Celsius table V2*/
#include <stdio.h>
main()
{
    float fahr, celsius;
    int lower, upper, step;
    lower = 0; /*Lower limit of temp. table*/
    upper = 300; /*upper limit*/
    step = 20; /*step size*/
    printf("Fahr Celsius table\n")
    fahr = lower;
    while (fahr <= upper){
        celsius = (5.0/9.0) * (fahr-32.0);
        printf("%3.0f %6.1f\n", fahr, celsius);
        fahr = fahr + step;
    }
}
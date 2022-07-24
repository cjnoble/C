#include <stdio.h>

/*
print Fahrenheit-Celsius table
*/
double f_to_c(double f);

void main()
{
    double fahr, celsius;
    #define LOWER 0.0 /* lower limit of table */
    #define UPPER 300.0 /* upper limit */
    #define STEP 20.0 /* step size */

    printf("  F\t   C\n");

    fahr = LOWER;
    while (fahr <= UPPER)
    {
        celsius = f_to_c(fahr);
        printf("%3.0f\t%6.1f\n", fahr, celsius);
        fahr += STEP;
    }

}

double f_to_c(double f)
{
    double c;
    c = 5.0*(f-32.0)/9.0;
    return c;
}
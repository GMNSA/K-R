/* fahrenheit.c */

#include "../includes/tools.h"

void    fahrenheit(void)
{
    float   fahr;
    float   celsius;
    int     lower;
    int     upper;
    int     step;

    lower = 0;
    fahr = lower;
    upper = 300;
    step = 20;
    while (fahr <= upper)
    {
        celsius = (5.0 / 9.0) * (fahr - 32);
        printf("%3.0fF\t%6.1fC\n", fahr, celsius);
        fahr += step;
    }
}

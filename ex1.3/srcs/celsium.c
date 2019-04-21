/* fahrenheit.c */

#include "../includes/tools.h"

/*
 * Function: celsium.
 * Arguments: (void)
 * Description: Fahrenheit temperature conversion Celsius
 *              and output corresponding table.
 *              C = (5*9) * (F-32)
 * return: (void)
 * */
void    celsium(void)
{
    float   fahr;
    float   celsium;
    int     lower;
    int     upper;
    int     step;

    lower = 0;
    fahr = lower;
    upper = 300;
    step = 20;
    printf("Headline Table:\n");
    while (fahr <= upper)
    {
        celsium = (5.0 / 9.0) * (fahr - 32);
        printf("%3.0f\t%6.1f\n", fahr, celsium);
        fahr += step;
    }
}

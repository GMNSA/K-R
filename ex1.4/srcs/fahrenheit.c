/* fahrenheit.c */

#include "../includes/tools.h"

/*
 * Function: fahrenheit.
 * Arguments: (void)
 * Description: Celsius temperature conversion to scale
 *              Fahrenheit and output corresponding talbe.
 *              F = C * (9 / 5 + 32)
 * return: (void)
 * */
void    fahrenheit(void)
{
    float       fahr;
    float       celsium;
    int         step;
    int         lower;
    int         upper;

    lower = -50;
    upper = 300;
    celsium = lower;
    step = 20;

    while (celsium <= upper)
    {
        fahr = (celsium * 1.8 + 32);
        printf("%3.0fC\t%6.1fF\n", celsium, fahr);
        celsium += step;
    }
}

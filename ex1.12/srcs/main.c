/* main.c */

#include "../includes/tools.h"

int     main(void)
{
    int     c;
    int     sign = OUT;

    while ((c = getchar()) != EOF)
    {
        if (c == 32)
        {
            sign = OUT;
        }
        else if (!sign && (c != 10))
        {
            sign = IN;
            putchar('\n');
            putchar(c);
        }
        else
            putchar(c);
    }
    return (0);
}

/* main.c */

#include "../includes/tools.h"

int     n = 8;

// ----------------------------------------------------------------------

void    detab(void);

// ----------------------------------------------------------------------

int     main(void)
{
    detab();
    return (0);
}

// ----------------------------------------------------------------------

/**
 * @brief void  detab(void) - Replace tab on spaces and print them.
 *
 */
void    detab(void)
{
    int     c;
    int     nc = 0;

    while ((c = getchar()) != EOF)
    {
        if (c != '\t' && c != '\n')
            nc = (nc + 1) % n;

        if (c == '\n')
            nc = 0;

        if (c == '\t')
        {
            for (int i = 0; i < (n - nc); ++i)
                putchar(' ');
            nc = 0;
        }
        else
            putchar(c);
    }
}

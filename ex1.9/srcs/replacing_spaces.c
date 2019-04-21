/* replacing_spaces.c */

#include "../includes/tools.h"

/*
 * Function: replacing_spaces.
 * Arguments: (void)
 * Descriptions: Replacing each line consisting of one or
 *               several spaces with one space.
 *               32 == ' '
 * return: (void)
 * */
void    replacing_spaces(void)
{
    int     c;
    int     last;

    last = 0;
    while ((c = getchar()) != EOF)
    {
        if ((c != 32) || (last != 32))
            printf("%c", c);
        last = c;
    }
}

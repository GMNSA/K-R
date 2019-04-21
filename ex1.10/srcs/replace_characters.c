/* replace_characters */

#include "../includes/tools.h"

/*
 * Function: replace_characters.
 * Arguments: (void)
 * Description: Replacing tabs with \t,
 *              backward characters(Backspace) with \b and
 *              backslashes - \\
 * return: (void)
 * */
void    replace_characters(void)
{
    int     c;

    while ((c = getchar()) != EOF)
    {
        if (c == 9)
            printf("\\t");
        else if (c == 8)
            printf("\\b");
        else if (c == '\\')
            printf("\\\\");
        else
            printf("%c", c);
    }
}

/* count_blanks.c */

#include "../includes/tools.h"

/*
 * Function: count_blanks.
 * Arguments: (void)
 * Description: Counting spaces, tabs, new lines
 *              and dispays.
 * return: (void)
 * */
void     count_blanks(void)
{
    int     spaces;
    int     tabs;
    int     new_lines;
    int     c;

    spaces = 0;
    tabs = 0;
    new_lines = 0;
    while ((c = getchar()) != EOF)
        if (c == 32)
            ++spaces;
        else if (c == 9)
            ++tabs;
        else if (c == 10)
            ++new_lines;
    printf("spaces: %d\n", spaces);
    printf("tabs: %d\n", tabs);
    printf("new_lines: %d\n", new_lines);
}

/* main.c */

#include "../includes/tools.h"

int     main(void)
{
    int     c;
    char    value1;
    char    value2;
    char    value3;

    value1 = ((c = getchar()) != EOF);
    printf("value1: %d\n", value1);
    value2 = value1 != 0;
    printf("value2: %d\n", value2);
    value3 = value2 != 0;
    printf("value3: %d\n", value3);
    while (value3)
    {
        value1 = ((c = getchar()) != EOF);
        printf("value1: %d\n", value1);
        value2 = value1 != 0;
        printf("value2: %d\n", value2);
        value3 = value2 != 1;
        printf("value3: %d\n", value3);
    }
    return (0);
}

/* main.c */

#include "../includes/tools.h"

#define SIZE_BUFF                 300
#define SIZE_LONGEST              100
#define SIZE_COUNT                10
#define LIMIT                     80

int     ft_getline(char *buff, unsigned limit);
void     copy(char *dest, char *source);
int    ft_strlen(char *str);

int     main(void)
{
    char    buff[SIZE_BUFF] = {0};
    char    longest[SIZE_COUNT][SIZE_LONGEST] = {{0}};
    int     len;
    int     i = 0;

    while ((len = ft_getline(buff, SIZE_BUFF)) > 0)
    {
        if (len > LIMIT)
        {
            copy(longest[i], buff);
            ++i;
        }
    }

    for (int i = 0; i < SIZE_COUNT; ++i)
    {
        if (ft_strlen(longest[i]) > 0)
            printf("%s", longest[i]);
    }
    return (0);
}

// ----------------------------------------------------------------------

/**
 * @brief void copy(char *type, char *type) - Copy from source to dest
 *
 * @param dest          - to copy
 * @param source        - from copy
 */
void     copy(char *dest, char *source)
{
    int     i;

    i = 0;
    while ((dest[i] = source[i]) != '\0')
        ++i;
    dest[i] = '\0';
}

// ----------------------------------------------------------------------

/**
 * @brief int ft_getline(char *type, unsigned type) - writes character to the 
 *      buffer until it overflows or does not end the line.
 *
 * @param buff      char type     - Where the characters are written.
 * @param limit     unsigned type - Limit the buffer.
 *
 * @return      int type - length characters.
 */
int     ft_getline(char *buff, unsigned limit)
{
    int         ch;
    unsigned    i;

    for (i = 0; (ch = getchar()) != EOF && ch != '\n' &&
            i < limit; ++i)
        buff[i] = ch;
    if (ch == '\n')
    {
        buff[i] = ch;
        i++;
    }
    buff[i] = '\0';
    return (i);
}

// ----------------------------------------------------------------------

/**
 * @brief int ft_strlen(char *type) - count the number of characters in a 
 *      string.
 *
 * @param str       char *type - String.
 *
 * @return          int type - String lenght.
 */
int    ft_strlen(char *str)
{
    int     i;

    i = 0;
    while (str[i])
        ++i;
    return (i);
}

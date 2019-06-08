/* main.c */

#include "../includes/tools.h"

#define SIZE_BUFF                 300

int     ft_getline(char *buff, unsigned limit);
void    copy(char *dest, char *source);
int     ft_strlen(char *str);
void    remove_last_spaces(char *str);

int     main(void)
{
    char    buff[SIZE_BUFF] = {0};
    int     len;

    while ((len = ft_getline(buff, SIZE_BUFF)) > 0)
    {
        if (len > 1)
        {
            remove_last_spaces(buff);
            printf("%s\n", buff);
        }
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

// ----------------------------------------------------------------------

/**
 * @brief int ft_it_spaces(char type) - Return true if tab, newline, space.
 *
 * @param c     char type - character
 *
 * @return      int type - true/false
 */
int     ft_it_spaces(char c)
{
    return (c == 32 || (c >= 9 && c <= 13));
}

// ----------------------------------------------------------------------

/**
 * @brief void  remove_last_spaces(char type) - Remove whitespace at the end
 *      of the line.
 *
 * @param str   char *type - String.
 */
void    remove_last_spaces(char *str)
{
    int     len = ft_strlen(str);
    int     i = (len - 1);

    while (ft_it_spaces(str[i]))
        --i;
    str[i+1] = '\n';
    str[i+2] = '\0';
}

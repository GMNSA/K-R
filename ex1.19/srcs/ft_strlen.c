/* ft_strlen.c */

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

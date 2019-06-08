/* ft_it_spaces.c */

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

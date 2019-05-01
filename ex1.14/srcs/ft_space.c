/* ft_space.c */

/*
 * If the character is whtitespace
 * return True else False.
 * */
int     ft_space(int   c)
{
    return (c == 32 || (c >= 9 && c <= 13));
}

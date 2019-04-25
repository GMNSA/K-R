/* ft_blank.c */

/*
 * Function: ft_blank.
 * Arguments: char(c) - the character to be checked.
 * Description: Check the character of spaces.
 * return: (bool)
 * */
int     ft_blank(char c)
{
    return (c == 32 || (c >= 9 && c <= 13));
}

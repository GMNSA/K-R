/* main.c */

#include "../includes/tools.h"

void    print_result(int n_word, int n_line, int n_char)
{
    printf("words: %d\nlines: %d\ncharacters: %d", n_word, n_line, n_char);
}

int     main(void)
{
    int     n_word = 0;
    int     n_line = 0;
    int     n_char = 0;
    int     sign = OUT;
    int     c;

    while ((c = getchar()) != EOF)
    {
        ++n_char;
        if (ft_blank(c))
        {
            sign = OUT;
            if (c == 10)
                ++n_line;
        }
        else if (!sign)
        {
            sign = IN;
            ++n_word;
        }
    }
    print_result(n_word, n_line, n_char);
    return (0);
}

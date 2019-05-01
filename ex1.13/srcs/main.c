/* main.c */

#include "../includes/tools.h"

/*
 * We get the largest number from the array
 * */
int     get_bit_num(int *array, int size)
{
    int     i;
    int     max;

    i = 0;
    max = 0;
    while (i < size)
    {
        if (array[i] > max)
            max = array[i];
        ++i;
    }
    return (max);
}

/* 
 * Horizontal dislay of the array
 * by the transmitted symbol.
 * */
void    horizont_display_array(int *array, int n)
{
    int     max_num;
    int     max;

    max_num = get_bit_num(array, n);
    max = max_num;

    for (int i = 0; i < max_num; i++)
    {
        printf("\n%d | ", max_num - i);
        for (int a = 0; a < n; a++)
        {
            if (array[a] < max)
                printf("  ");
            else if (array[a] == 0)
                continue;
            else
                printf("@ ");
        } 
        --max;
    }
}

int     main(void)
{
    int     c;
    int     state = OUT;
    int     words[20] = {0};
    int     i = 0;

    while ((c = getchar()) != EOF)
    {
        if (ft_space(c))
        {
            ++i;
            state = OUT;
        }
        else if (!state)
        {
            words[i] += 1;
            state = IN;
        }
        else
            words[i] += 1;
    }
    horizont_display_array(words, 20);
    return (0);
}

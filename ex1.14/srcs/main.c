/* main.c */

/*
 * Programm to display a histogramm of frequencies with
 * which there are various characters in the input stream.
 * */

#include "../includes/tools.h"

/*
 * Getting the largest number from an array.
 * */
int    get_max_num(char *table)
{
    int     max = 0;

    for (int i = 0; i < N; ++i)
    {
        if (table[i] > max)
            max = table[i];
    }
    return (max);
}

/* Get the number of words */
int     count_words(char *table)
{
    int     count = 0;

    for (int i = 0; i < N; i++)
    {
        if (table[i] != 0)
            count++;
    }
    return (count);
}

/* Draw a separator bar */
void    separate_display(int count)
{
    putchar('\n');
    printf("  |");
    while (count-- >= 0)
        printf("--");
    putchar('\n');

}

/* Draw the bottom table */
void    botton_display(char *table)
{
    printf("    ");
    for (int i = 0; i < N; i++)
    {
        if (table[i] != 0)
            printf("%c ", i);
    }
}


/*
 * Function: histogramm_display.
 * Arguments: *table(char) - An array that contains characters to print.
 *            p(char)      - Character to print.
 * Description: Function to display a histogramm of frequencies characters
 *              from an array.
 * return: void
 * */
void    histogramm_display(char *table, char p)
{
    int     max_num = get_max_num(table);
    int     temp = max_num;
    int     count = 0;

    for (int i = 0; i < max_num; i++)
    {
        printf("\n%d | ", max_num - i);
        for (int a = 0; a < N; a++)
        {
            if (table[a] == 0)
                continue;
            else if (table[a] < temp)
                printf("  ");
            else
                printf("%c ", p);
        }
        temp--;
    }
    count = count_words(table);
    separate_display(count);
    botton_display(table);
    putchar('\n');
}

int     main(void)
{
    char    table[128] = {0};
    int     c;

    while ((c = getchar()) != EOF)
    {
        if (!ft_space(c))
            table[c] += 1;
    }
    histogramm_display(table, '^');
    return (0);
}

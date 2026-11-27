#include <stdio.h>

void ft_print_even_numbers_in_range(int start, int end)
{
    int step;
    int i;
    int first;

    if (start > end) step = -1;
    else step = 1;

    first = 1;
    i = start;
    while ((step == 1 && i <= end) || (step == -1 && i >= end))
    {
        if (i % 2 == 0)
        {
            if (!first)
                printf(" ");
            printf("%d", i);
            first = 0;
        }
        i += step;
    }
}

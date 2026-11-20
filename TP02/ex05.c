#include <stdio.h>

void ft_print_even(int start, int end)
{
    int has_even = 0;
    for (int i = start; i <= end; i++)
    {
        if (i % 2 == 0)
        {
            if (has_even == 0)
                printf("Even : ");
            printf("%d", i);
            has_even = 1;
        }
    }
    if (has_even == 1)
        printf("\n");
}

void ft_print_odd(int start, int end)
{
    int has_odd = 0;
    for (int i = start; i <= end; i++)
    {
        if (i % 2 != 0)
        {
            if (has_odd == 0)
                printf("Odd : ");
            printf("%d", i);
            has_odd = 1;
        }
    }
    if (has_odd == 1)
        printf("\n");
}

void ft_print_even_odd(int start, int end)
{
    ft_print_even(start, end);
    ft_print_odd(start, end);
}

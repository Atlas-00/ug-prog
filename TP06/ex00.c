#include <stdio.h>

void ft_print_int_tab(int tab[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", tab[i]);
    }

    printf("\n");
}

#include <stdio.h>

void ft_print_number_len(int number) 
{
    int count = 0;
    int n = number;

    if (n < 0)
        n = n * -1;

    if (n == 0) {
        count = 1;
    }
    else 
    {
        while (n != 0)
        {
            n = n / 10;
            count = count + 1;
        }
    }

    printf("%d\n", count);
}
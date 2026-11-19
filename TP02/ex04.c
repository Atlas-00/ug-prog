#include <stdio.h>

void ft_pyramid(int number)
{
    for (int x = 0; x <= number; x++)
    {
        for (int y = 0; y <= x; y++)
        {
            printf("%d", y);
        }
        printf("\n");
    }
}

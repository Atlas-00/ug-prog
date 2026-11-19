#include <unistd.h>

void ft_triangle(int number) 
{
    if (number <= 0 )
        return;

    for (int x = 0; x <= number; x++)
    {
        for (int y = 0; y <= x; y++)
        {
            write(1, "*", 1);
        }

        write(1, "\n", 2);
    }
}

#include <unistd.h>

void ft_triangle(int number)
{
    int x;
    int y;

    if (number <= 0)
        return;
    x = 1;
    while (x <= number)
    {
        y = 0;
        while (y < x)
        {
            write(1, "*", 1);
            y++;
        }
        if (x != number)
            write(1, "\n", 1);
        x++;
    }
}

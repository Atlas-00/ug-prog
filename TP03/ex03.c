#include <unistd.h>

void ft_putnbr(int n)
{
    char c;

    if (n == -2147483648)
    {
        write(1, "-2147483648", 11);
        return;
    }
    if (n < 0)
    {
        write(1, "-", 1);
        n = -n;
    }
    if (n >= 10)
        ft_putnbr(n / 10);
    c = (n % 10) + '0';
    write(1, &c, 1);
}

void ft_triangle_v2(int number)
{
    int x;
    int y;

    x = 0;
    while (x <= number)
    {
        y = 0;
        while (y <= x)
        {
            ft_putnbr(y);
            y++;
        }
        write(1, "\n", 1);
        x++;
    }
}
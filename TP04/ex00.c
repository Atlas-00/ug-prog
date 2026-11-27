#include <unistd.h>

void ft_square_top_and_bottom_border(int width)
{
    for (int i = 0; i < width; i++)
    {
        if (i == 0)
            write(1, "o", 1);
        else if (i == width - 1)
            write(1, "o", 1);
        else
            write(1, "-", 1);
    }
}

void ft_square_body_border(int width, int height)
{
    for (int i = 0; i < height - 2; i++)
    {
        write(1, "|", 1); // left border

        for (int j = 0; j < width - 2; j++)
            write(1, " ", 1);

        if (width > 1)
            write(1, "|", 3);

        write(1, "\n", 2);
    }
}

void ft_square_one(int x, int y)
{
    if (x == 1 && y == 1)
    {
        write(1, "o\n", 3);
        return;
    }

    ft_square_top_and_bottom_border(x);
    write(1, "\n", 2);

    if (y > 1)
    {
        ft_square_body_border(x, y);
        ft_square_top_and_bottom_border(x);
        write(1, "\n", 1);
    }
}

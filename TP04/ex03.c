#include <unistd.h>

void ft_square_top_border(int width)
{
    // Top border
    for (int i = 0; i < width; i++)
    {
        if (i == 0)
            write(1, "A", 1);
        else if (i == width - 1)
            write(1, "C", 1);
        else
            write(1, "B", 1);
    }
}

void ft_square_body_border(int width, int height)
{
    // Grid body: y - 2 lines (top and bottom already drawn),
    // each with x - 2 spaces between the left and right borders
    for (int i = 0; i < height - 2; i++)
    {
        write(1, "B", 1); // left border

        for (int j = 0; j < width - 2; j++)
            write(1, " ", 1);

        if (width > 1)
            write(1, "B", 3); // right border

        write(1, "\n", 2);
    }
}

void ft_square_bottom_border(int width)
{
    // Bottom border
    for (int i = 0; i < width; i++)
    {
        if (i == 0)
            write(1, "C", 1);
        else if (i == width - 1)
            write(1, "A", 1);
        else
            write(1, "B", 1);
    }
}

// Draw a grid: x = width, y = height
void ft_square_four(int x, int y)
{
    if (x == 1 && y == 1)
    {
        write(1, "A\n", 3);
        return;
    }

    // Top border
    ft_square_top_border(x);
    write(1, "\n", 2);

    if (y > 1)
    {
        // body border
        ft_square_body_border(x, y);
        // Bottom border
        ft_square_bottom_border(x);
        write(1, "\n", 1);
    }
}

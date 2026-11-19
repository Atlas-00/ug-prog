#include <stdio.h>

// Prints every even number between start and end, both included,
// separated by spaces on a single line.
// If start is greater than end, counts down from start instead.
// Prints nothing when the range contains no even number.
void ft_print_even_numbers_in_range(int start, int end)
{
    int step;

    if (start > end)
        step = -1;
    else
        step = 1;

    for (int i = start; i != end + step; i += step)
    {
        if (i % 2 == 0)
            printf("%d ", i);
    }
}

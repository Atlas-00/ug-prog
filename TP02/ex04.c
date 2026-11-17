#include <stdio.h>

int main(void)
{
    int a = -1;
    int b = 2;
    int c = 1;

    int delta = b * b - 4 * a * c;

    if (delta < 0)
    {
        printf("Delta : %d\n", delta);
        printf("Pas de solutions\n");
        return 0;
    }

    int r = 0;
    while ((r + 1) * (r + 1) <= delta)
        r++;

    if (delta == 0)
    {
        printf("Delta : %d\n", delta);
        printf("Il existe 1 solution\n");
        printf("x = %.2f\n", (float)-b / (2 * a));
    }
    else
    {
        printf("Delta : %d\n", delta);
        printf("Il existe 2 solutions\n");
        printf("x1 = %.2f\n", ((float)-b - r) / (2 * a));
        printf("x2 = %.2f\n", ((float)-b + r) / (2 * a));
    }

    return 0;
}
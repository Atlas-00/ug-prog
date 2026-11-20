#include <stdio.h>

int main(void)
{
    // Coefficients of the equation ax^2 + bx + c = 0
    int a = 0;
    int b = 0;
    int c = 0;

    // Discriminant: delta = b^2 - 4ac
    int delta = b * b - 4 * a * c;

    printf("Delta : %d\n", delta);

    // Negative discriminant: no real solutions
    if (delta < 0)
    {
        printf("Il exist aucune solutions\n");
        return 0;
    }

    // Zero discriminant: one unique solution x = -b / (2a)
    if (delta == 0)
    {
        int unique_solution = -b / (2 * a);
        printf("Il existe 1 solution\n");
        printf("x = %d\n", unique_solution);
        return 0;
    }

    // rough estimate, integer part of sqrt(delta)
    // r is the largest integer such that (r+1)^2 > delta
    int sqrt_estimate = 0;
    while ((sqrt_estimate + 1) * (sqrt_estimate + 1) <= delta)
    {
        sqrt_estimate++;
    }

    // efine with Heron's method (Newton iteration):
    // each iteration replaces x by (x + delta/x) / 2,
    // which converges to sqrt(delta)
    double sqrt_delta = sqrt_estimate;
    for (int i = 0; i <= 4; i++)
    {
        sqrt_delta = (sqrt_delta + delta / sqrt_delta) / 2;
    }

    // Positive discriminant: two solutions
    if (delta > 0)
    {
        double root1 = ((float)-b - sqrt_delta) / (2 * a);
        double root2 = ((float)-b + sqrt_delta) / (2 * a);

        printf("Il existe 2 solutions\n");
        printf("x1 = %f\n", root1);
        printf("x2 = %f\n", root2);
    }

    return 0;
}

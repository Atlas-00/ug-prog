
int ft_iterative_factorial(int nbr)
{
    if (nbr <= 0)
       return 0;

    int fact = 1, i;

    for (i = 1; i <= nbr; i++)
    {
        fact *= i;
    }

    return fact;
}

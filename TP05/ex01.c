
int ft_iterative_factorial(int nbr)
{
    if (nbr == 1)
        return 1;

    if (nbr <= 0)
        return 1;

    return nbr * ft_iterative_factorial(nbr - 1);
}

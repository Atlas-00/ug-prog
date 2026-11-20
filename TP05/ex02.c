
int ft_recursive_power(int nbr, int power)
{
    if (power != 0)
        return (nbr * ft_recursive_power(nbr, power - 1));
    else
        return 1;
}

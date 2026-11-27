

int ft_power(int number, int power)
{
    if (power == 0)
        return 1;
    if (power < 0)
        return 0;

    return number * ft_power(number, power - 1);
}

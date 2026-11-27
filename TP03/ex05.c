
int ft_is_prime(int number)
{
    int i;

    if (number < 2)
        return 0;

    i = 2;
    while (i <= number / i)
    {
        if (number % i == 0)
            return 0;
        i++;
    }
    return 1;
}


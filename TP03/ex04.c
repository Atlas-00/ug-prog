
int ft_sqrt(int number)
{
    int i;

    if (number < 0)
        return (-1);
    i = 0;
    while (i <= 46340 && i * i < number)
        i++;
    if (i <= 46340 && i * i == number)
        return (i);
    return (-1);
}


int ft_get_average(int tab[], int size)
{
    if (size <= 0)
        return 0;

    int count = 0;

    for (int i = 0; i < size; i++)
    {
        count += tab[i];
    }

    return count / size;
}

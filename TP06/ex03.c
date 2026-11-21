
int ft_get_index(int tab[], int size, int search)
{

    for (int i = 0; i < size; i++)
    {
        if (tab[i] == search)
            return i;
    }

    return -1;
}

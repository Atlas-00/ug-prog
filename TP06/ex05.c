
void ft_exanche(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void ft_array_sort_asc(int tab[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - 1; j++)
        {
            if (tab[j] > tab[j + 1])
                ft_exanche(&tab[j], &tab[j + 1]);
        }
    }
}

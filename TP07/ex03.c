
void ft_str_n_cpy(char *src, char *dest, int n)
{
    for (int i = 0; i < n; i++)
    {
        if (i == n)

            return;

        dest[i] = src[i];
    }
}
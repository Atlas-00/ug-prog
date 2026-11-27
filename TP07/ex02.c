
int ft_strlen(char *str)
{
    int i = 0;
    while (str[i] != '\0')
        i++;

    return i;
}

void ft_str_cpy(char *src, char *dest)
{
    int len_src = ft_strlen(src);
    int len_dest = ft_strlen(dest);

    for (int i = 0; i < len_src; i++)
    {
        if (i == len_dest)
            return;
        dest[i] = src[i];
    }
}

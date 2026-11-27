#include <stdio.h>

int ft_strlen(char *str)
{
    int i = 0;
    while (str[i] != '\0')
        i++;

    return i;
}

char *ft_substr(int *str, int start, int length)
{

    char *dest = NULL;
    for (int i = 0; i < length; i++)
    {
        dest[i] = str[start + 1];
    }

    return dest;
}

int main(void)
{
    char str[] = "J'aime les poney";
    int start = 11;
    int length = 5;
    printf("%s\n", ft_substr(str, start, length));
    return 0;
}
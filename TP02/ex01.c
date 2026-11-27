#include <unistd.h>

void ft_print(void)
{
    char *s = "L’homme PROPOSE, Dieu DISPOSE et quand \
 le diable S’IMPOSE, l’éternel IMPOSE.\n ";

    while (*s)
        write(1, s++, 1);
}

void ft_print_more(int number)
{
    for (int i = 0; i < number; i++)
    {
        ft_print();
    }
}

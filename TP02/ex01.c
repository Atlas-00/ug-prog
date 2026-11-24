#include <unistd.h>

void ft_print(void)
{
    write(1, "L’homme PROPOSE, Dieu DISPOSE et ", 35);
    write(1, "quand le diable S’IMPOSE, l’éternel IMPOSE.\n", 50);
}

void ft_print_more(int number) {
    for (int i = 0; i < number; i ++)
    {
        ft_print();
    }
}

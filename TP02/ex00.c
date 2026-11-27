#include <unistd.h>

void ft_print(void)
{
    write(1, "L’homme PROPOSE, Dieu DISPOSE et ", 35);
    write(1, "quand le diable S’IMPOSE, l’éternel IMPOSE.\n", 49);
}

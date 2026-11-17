#include <stdio.h>

int main(void)
{
    int T;
    T = 903219;

    int heure = T / 3600;
    int minutes = (T % 3600) / 60;
    int secondes = (T % 3600) % 60;

    printf("%d \n", heure);
    printf("%d \n", minutes);
    printf("%d \n", secondes);

    return 0;
}
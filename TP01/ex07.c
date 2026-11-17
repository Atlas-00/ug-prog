#include <stdio.h>

int main(void)
{
    int age = 15;
    int joueur = 3;
    int adulte = 0;
    int reservation = 1;

    if (!reservation)
    {
        printf("Réservation obligatoireaq\n");
        return 0;
    }

    if (joueur >= 6)
    {
        printf("Groupe trop grand\n");
        return 0;
    }
    if (joueur < 2)
    {
        printf("Groupe trop petit\n");
        return 0;
    }

    if (age < 10)
    {
        printf("Accès refusé\n");
    }
    else if (age <= 13)
    {
        if (adulte && joueur >= 3)
            printf("Accès autorisé\n");
        else
            printf("Accès refusé\n");
    }
    else if (age <= 17)
    {
        if (joueur >= 4 || adulte)
            printf("Accès autorisé\n");
        else
            printf("Accès refusé\n");
    }
    else
    {
        printf("Accès autorisé\n");
    }

    return 0;
}
#include <unistd.h>

int main(void)
{
    int number = 3;

    for (int i = 0; i < number; i++)
    {
        write(1, "Naider\n",8);
    }

    return 0;
}
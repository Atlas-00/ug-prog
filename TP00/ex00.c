#include <unistd.h>

int main(void)
{
    // Show my firstname and m'y lastname
    write(1, "Naider LAFLEUR\n", 16);
    return 0;
}
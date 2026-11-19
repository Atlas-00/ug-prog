// ft_power computes number raised to the power of power.
// Returns 0 if power is negative, 1 if power is 0 (including 0^0 by convention).
int ft_power(int number, int power)
{
    // Base case
    if (power == 0)
        return 1;
    if (power < 0)
        return 0;

    // Recursive calculation
    return number * ft_power(number, power - 1);
}

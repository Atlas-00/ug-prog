
void ft_array_cpy(int src[], int dest[], int size) 
{
    for (int i = 0; i < size; i++)
    {
        dest[i] = src[size - 1  - i];
    } 
}

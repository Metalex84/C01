#include <stdio.h>

void	ft_ft(int *nbr);

int main(void)
{
    int a = 68;
    printf("El valor de a es: %d\n", a);

    ft_ft(&a);
    printf("Ahora el valor de a es: %d\n", a);
}
#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod);

int main (void)
{
    int a = 10;
    int b = 3;
    int div = 0;
    int mod = 0;

    ft_div_mod(a, b, &div, &mod);
    printf("a = %d, b = %d, div = %d, mod = %d\n", a, b, div, mod);
    return (0);
}
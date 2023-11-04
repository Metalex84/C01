#include <stdio.h>

void	ft_swap(int *a, int *b);

int main(void)
{
    int a = 42, b = 68;
    printf("a = %d, b = %d\n", a, b);
    ft_swap(&a, &b);
    printf("a = %d, b = %d\n", a, b);
    return (0);
}
#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size);

int main (void)
{
    int tab[] = {11, 2, 13, 4, 15, 6, 17, 8};
    int i = 0;
    
    printf("The original array is: ");
    while (i < 8)
    {
        printf("%d", tab[i++]);
        printf(" ");
    }
    printf("\n");
    
    ft_sort_int_tab(tab, 8);

    printf("The sorted array is: ");
    i = 0;
    while (i < 8)
    {
        printf("%d", tab[i++]);
        printf(" ");
    }
    printf("\n");
    return (0);
}
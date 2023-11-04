#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size);

int main (void)
{
    int tab[] = {1, 2, 3, 4, 5, 6, 7, 8};
    int i = 0;
    
    printf("The original array is: ");
    while (i < 8)
        printf("%d", tab[i++]);
    printf("\n");
    
    ft_rev_int_tab(tab, 8);

    printf("The reversed array is: ");
    i = 0;
    while (i < 8)
        printf("%d", tab[i++]);
    printf("\n");
    return (0);
}
#include <stdio.h>

int	ft_strlen(char *str);

int main (void)
{
    printf("The length of the string is %d characters\n", 
    ft_strlen("Welcome to 42 Madrid!"));
    return (0);
}
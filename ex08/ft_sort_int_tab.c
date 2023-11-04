/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejango <alejango@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 11:32:29 by alejango          #+#    #+#             */
/*   Updated: 2023/08/14 11:32:57 by alejango         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_swap2(int *a, int *b)
{
	int	swap;

	swap = *a;
	*a = *b;
	*b = swap;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	aux;

	i = size;
	while (i > 0)
	{
		aux = 1;
		j = 0;
		while (j < i - 1)
		{
			if (tab[j] > tab[j + 1])
			{
				ft_swap2(&tab[j], &tab[j + 1]);
				aux = 0;
			}
			j++;
		}
		i--;
		if (aux == 1)
			break ;
	}
}

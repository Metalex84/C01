/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejango <alejango@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 11:29:22 by alejango          #+#    #+#             */
/*   Updated: 2023/08/14 11:30:01 by alejango         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putstr(char *str)
{
	char	*p_str;

	p_str = str;
	while (*p_str != '\0')
	{
		write(1, p_str, 1);
		p_str += 1;
	}
}

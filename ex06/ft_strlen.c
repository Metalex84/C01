/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejango <alejango@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 11:30:30 by alejango          #+#    #+#             */
/*   Updated: 2023/08/14 11:31:06 by alejango         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_strlen(char *str)
{
	int		contador;
	char	*p_str;

	p_str = str;
	contador = 0;
	while (*p_str != '\0')
	{
		p_str += 1;
		contador += 1;
	}
	return (contador);
}

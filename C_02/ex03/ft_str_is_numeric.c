/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lomasson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 20:27:26 by lomasson          #+#    #+#             */
/*   Updated: 2022/01/19 11:25:25 by lomasson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_numeric(char *str)
{
	int	i;
	int	a;

	i = 0;
	a = 1;
	if (str)
	{
		while (str[i])
		{
			if (str[i] >= 48 && str[i] <= 57)
				a = 1;
			else
			{	
				a = 0;
				break ;
			}
			i++;
		}
	}
	return (a);
}

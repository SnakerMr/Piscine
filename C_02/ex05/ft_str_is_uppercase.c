/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lomasson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 20:27:26 by lomasson          #+#    #+#             */
/*   Updated: 2022/01/19 11:29:44 by lomasson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;
	int	a;

	i = 0;
	a = 1;
	if (str)
	{
		while (str[i])
		{
			if (str[i] >= 65 && str[i] <= 90)
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

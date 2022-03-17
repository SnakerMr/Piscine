/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lomasson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 14:16:48 by lomasson          #+#    #+#             */
/*   Updated: 2022/01/27 21:44:16 by lomasson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_atoi(char *str)
{
	int	i;
	int	minus;
	int	rvalue;

	i = 0;
	minus = 0;
	rvalue = 0;
	while (str[i] == 32 || str[i] == 9 || str[i] == 10
		|| str[i] == 11 || str[i] == 12 || str[i] == 13)
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			minus++;
		i++;
	}
	while (str[i] >= 48 && str[i] <= 57)
	{
		rvalue = (rvalue * 10) + (str[i] - 48);
		i++;
	}
	if (minus % 2 != 0)
		rvalue = -rvalue;
	return (rvalue);
}

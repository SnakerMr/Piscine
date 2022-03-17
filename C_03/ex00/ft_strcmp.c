/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lomasson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 19:39:25 by lomasson          #+#    #+#             */
/*   Updated: 2022/01/21 12:07:55 by lomasson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;
	int	a;
	int	b;
	int	c;

	i = 0;
	c = 0;
	while (s1[i] || s2[i])
	{
		if (s1[i] > s2[i])
		{
			a = s1[i] - s2[i];
			return (a);
			break ;
		}
		else if (s1[i] < s2[i])
		{
			b = s1[i] - s2[i];
			return (b);
			break ;
		}
	i++;
	}
	return (c);
}

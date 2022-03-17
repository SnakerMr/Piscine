/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lomasson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 19:39:25 by lomasson          #+#    #+#             */
/*   Updated: 2022/01/29 12:46:24 by lomasson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strncmp(char *s1, char *s2, unsigned int *n)
{
	int	i;
	int	a;
	int	b;
	int	c;

	i = -1;
	c = 0;
	while (++i != (int)n)
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
		else if (s1[i] == '\0' && s2[i] == '\0')
			break ;
	}
	return (c);
}

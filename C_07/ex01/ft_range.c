/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lomasson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 16:45:35 by lomasson          #+#    #+#             */
/*   Updated: 2022/02/03 16:39:53 by lomasson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*tab;
	int	i;

	tab = NULL;
	if (min >= max)
		return (NULL);
	tab = malloc (sizeof(int) * (max - min));
	if (!tab)
		return (NULL);
	else
	{
		i = 0;
		while (max - min > 0)
			tab[i++] = min++;
	}
	return (tab);
}

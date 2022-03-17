/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lomasson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 11:32:10 by lomasson          #+#    #+#             */
/*   Updated: 2022/02/03 18:29:34 by lomasson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_malloc(int size, char **strs, char *sep)
{
	int		sizecount;
	int		i;
	int		sepcount;

	sizecount = 0;
	sepcount = 0;
	while (sizecount != size)
	{
		i = 0;
		while (strs[sizecount][i])
			i++;
		sizecount++;
	}
	while (sep[sepcount])
		sepcount++;
	return ((sizecount - 1) + (size - 1) * (sepcount - 1) + 1);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*tab;
	int		tabcount;
	int		sizecount;
	int		i;

	tabcount = 0;
	sizecount = 0;
	tab = malloc(ft_malloc(size, strs, sep));
	while (sizecount != size)
	{
		i = 0;
		while (strs[sizecount][i])
			tab[tabcount++] = strs[sizecount][i++];
		i = 0;
		while (sep[i] && sizecount != size - 1)
			tab[tabcount++] = sep[i++];
		sizecount++;
	}
	return (tab);
}

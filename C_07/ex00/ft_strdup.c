/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lomasson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 16:30:56 by lomasson          #+#    #+#             */
/*   Updated: 2022/02/03 11:01:39 by lomasson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		i;
	char	*dest;

	i = 0;
	while (src[i])
		i++;
	dest = malloc(sizeof(char) * i);
	if (dest == NULL)
		return (0);
	else
	{
		i = -1;
		while (src[++i])
			dest[i] = src[i];
		dest[i] = '\0';
		return (dest);
	}
}

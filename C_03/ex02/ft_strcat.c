/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lomasson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 13:47:19 by lomasson          #+#    #+#             */
/*   Updated: 2022/01/27 18:01:57 by lomasson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char	*ft_strcat(char *dest, char *src)
{
	int	s;
	int	d;
	int	r;
	int	i;

	s = 0;
	i = 0;
	d = 0;
	while (dest[d] != '\0')
	{
		d++;
	}
	while (src[s])
		s++;
	r = d + s;
	while (d < r)
	{
		dest[d] = src[i];
		d++;
		i++;
	}
	dest[d] = '\0';
	return (dest);
}

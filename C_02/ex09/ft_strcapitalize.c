/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lomasson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 20:27:26 by lomasson          #+#    #+#             */
/*   Updated: 2022/01/20 16:14:41 by lomasson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	if (str[0] >= 32 && str[0] <= 47)
		str[i] = str[i] - 32;
	else if (str[0] >= 58 && str[0] <= 64)
		str[i] = str[i] - 32;
	else if (str[0] >= 91 && str[0] <= 96)
		str[i] = str[i] -32;
	else if (str[0] >= 123 && str[0] <= 126)
		str[i] = str[i] -32;
	i++;
	while (str)
	{
		if (str[i - 1] >= 33 && str[i - 1] <= 47)
			str[i] = str[i] - 32;
		else if (str[i - 1] <= 64 && str[i - 1] >= 58)
			str[i] = str[i] - 32;
		else if (str[i - 1] >= 91 && str[i - 1] <= 96)
			str[i] = str[i] -32;
		else if (str[i - 1] >= 123 && str[i - 1] <= 126)
			str[i] = str[i] -32;
		i++;
	}
	return (str);
}

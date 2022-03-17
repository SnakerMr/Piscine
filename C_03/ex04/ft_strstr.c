/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lomasson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 22:17:09 by lomasson          #+#    #+#             */
/*   Updated: 2022/01/27 18:52:58 by lomasson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	x;
	int	y;

	x = 0;
	y = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[x])
	{
		y = 0;
		while (str[x + y] == to_find[y] && str[y + x] && to_find[y])
				y++;
		if (to_find[y] == '\0')
			return (str + x);
		x++;
	}
	return (0);
}

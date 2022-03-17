/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lomasson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/15 09:53:17 by lomasson          #+#    #+#             */
/*   Updated: 2022/01/15 14:44:58 by lomasson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	part1(int x, int c)
{	
	write (1, "A", 1);
		c++;
	while (c <= x - 1)
	{
		write(1, "B", 1);
		c++;
	}
	if (x > 1)
		write (1, "C", 1);
	write (1, "\n", 1);
}

void	rush(int x, int y)
{
	int	l;
	int	c;

	l = 1;
	c = 1;
	if (y > 0 && x > 0)
		part1(x, c);
	l++;
	while (l <= y - 1)
	{
		c = 1;
		if (x > 1)
			write (1, "B", 1);
		c++;
		while (c <= x - 1)
		{
			write(1, " ", 1);
			c++;
		}
		write (1, "B\n", 2);
		l++;
	}
	c = 1;
	if (l == y)
		part1(x, c);
}

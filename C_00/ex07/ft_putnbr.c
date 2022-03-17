/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lomasson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/15 19:24:07 by lomasson          #+#    #+#             */
/*   Updated: 2022/01/17 09:57:16 by lomasson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>

void	number(int w, int b, int y, int z)
{
	int	x;

	x = 1;
	while (z >= 9)
	{
		x = (y / z);
		if (y >= z)
		{
			y = y - (x * z);
			w = x + '0';
			write(1, &w, 1);
			z = z / 10;
		}
		else
		{
			write(1, "0", 1);
			z = z / 10;
		}
	}
		w = y + b ;
	write (1, &w, 1);
}

void	ft_putnbr(int nb)
{
	int		t[5];

	t[0] = '0';
	t[1] = 0;
	t[2] = '0';
	if (nb < 0)
	{
		write(1, "-", 1);
		nb++;
		nb = -nb;
		t[2] = '1';
	}
	t[3] = nb;
	t[4] = 1;
	while (t[3] >= 10)
	{
		t[3] = t[3] / 10;
		t[4] = t[4] * 10;
	}
	t[3] = nb;
	number(t[0], t[2], t[3], t[4]);
}

int	main(void)
{
	ft_putnbr(42);
}

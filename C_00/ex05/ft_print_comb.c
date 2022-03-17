/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lomasson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 17:27:21 by lomasson          #+#    #+#             */
/*   Updated: 2022/01/14 12:30:40 by lomasson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_print_comb(void)
{
	int	tab[3];

	tab[0] = 0;
	while (tab[0] <= 7)
	{
		tab[1] = tab[0] + 1;
		while (tab[1] <= 8)
		{
			tab[2] = tab [1] + 1;
			while (tab [2] <= 9)
			{
				ft_putchar('0' + tab[0]);
				ft_putchar('0' + tab[1]);
				ft_putchar('0' + tab[2]);
				if (tab[0] != 7)
				{	
					ft_putchar(',');
					ft_putchar(' ');
				}
				tab[2]++;
			}
			tab[1]++;
		}
		tab[0]++;
	}
}

int	main(void)
 {
	ft_print_comb();
}

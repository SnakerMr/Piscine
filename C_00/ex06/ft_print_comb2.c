/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lomasson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/14 12:32:06 by lomasson          #+#    #+#             */
/*   Updated: 2022/01/15 20:43:02 by lomasson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<unistd.h>

void	ft_print_comb2(void)
{
	int		a;
	int		b;
	char	t[5];

	t[2] = ' ';
	a = 0;
	while (a < 99)
	{
		b = a + 1;
		t[0] = a / 10 + '0';
		t[1] = a % 10 + '0';
		while (b <= 99)
		{
			t[3] = b / 10 + '0';
			t[4] = b % 10 + '0';
			write(1, &t, 5);
			if (a < 98)
				write(1, ", ", 2);
			b++;
		}
		a++;
	}
}
int	main(void)
{
	ft_print_comb2();
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lomasson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 23:28:34 by lomasson          #+#    #+#             */
/*   Updated: 2022/02/01 18:48:55 by lomasson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	x;

	if (power < 0 && nb != 0)
		return (0);
	else if (power == 0)
		return (1);
	else
	{
		x = 1;
		while (power > 0)
		{
			x = nb * x;
			power--;
		}
		return (x);
	}
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lomasson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 15:45:12 by lomasson          #+#    #+#             */
/*   Updated: 2022/01/17 19:37:11 by lomasson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)

{
	int	i;
	int	a;

	i = 0;
	size-- ;
	while (i <= size / 2)
	{
		a = tab[i];
		tab[i] = tab[size - i];
		tab[size - i] = a;
		i++;
	}
}

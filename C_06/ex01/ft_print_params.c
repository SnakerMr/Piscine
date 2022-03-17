/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lomasson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 22:41:43 by lomasson          #+#    #+#             */
/*   Updated: 2022/02/01 21:15:45 by lomasson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;
	int	a;

	i = 1;
	while (argv[i])
	{
		a = 0;
		while (argv[i][a])
			a++;
		write(1, argv[i], a);
		write(1, "\n", 1);
		i++;
	}
	return (0);
	(void) argc;
}

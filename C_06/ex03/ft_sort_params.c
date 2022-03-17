/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lomasson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 23:13:36 by lomasson          #+#    #+#             */
/*   Updated: 2022/02/01 16:55:30 by lomasson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 /!\ EXERCICE A NE PAS A PRENDRE EN COMTE  /!\

#include <unistd.h>

int main(int argc, char **argv)
{
	int	i;
	int	t;
	int	a;
	char *tab;

	i = 1;
	while (argv[i])
	{
		while(argv[t])
		{
			if(strcmp(argv[i], argv[t]) >= 0)
			{
				tab = argv[i];
				argv[i] = argv[t];
				argv[t] = tab;
				break ;
			}
			else
				i++;
			t = i + 1;
		}
	}
	i = 1;
	while (argv[i])
	{
		a = 0;
		while (argv[i][a])
			a++;
		write(1, argv[i], a);
		write(1, "\n", 1);
	}
	(void)argc;
}
*/

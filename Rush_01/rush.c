/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lomasson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/22 13:51:23 by lomasson          #+#    #+#             */
/*   Updated: 2022/01/23 11:49:56 by lomasson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int left(char *tab, int size)
{
	int	i;
	int	j;
	int left;

	left = 1;
	i = 1;
	while(i < size)
	{
		j = i - 1;
		while(j != -1)
		{
			if(tab[j] < tab[i])
				j--;
			else
				break;
		}
		if (j == -1)
			left++;
		i++;
	}
	return(left);
}

int right(char *tab, int size){
	int	i;
	int	j;
	int right;

	right = 1;
	i = size - 2;
	while(i >= 0)
	{
		j = i + 1;
		while(j < size)
		{
			if(tab[i] > tab[j])
				j++;
			else
				break;
		}
		if (j == size)
			right++;
		i--;
	}
	return(right);
}

int main()
{
	int		a;
	int		b;
	int		i = 0;
	int		r;
	int		l;
	int		t = 4;
	int		x = 2;
	int 	y = 3;
	char	*tab[24];
	char	*pos[24];

	pos[0] = "1234";
	pos[1] = "1243";
	pos[2] = "1342";
	pos[3] = "1324";
	pos[4] = "1432";
	pos[5] = "1423";
	pos[6] = "2134";
	pos[7] = "2143";
	pos[8] = "2341";
	pos[9] = "2314";
	pos[10] = "2431";
	pos[11] = "2413";
	pos[12] = "3124";
	pos[13] = "3142";
	pos[14] = "3214";
	pos[15] = "3241";
	pos[16] = "3412";
	pos[17] = "3421";
	pos[18] = "4123";
	pos[19] = "4132";
	pos[20] = "4213";
	pos[21] = "4231";
	pos[22] = "4312";
	pos[23] = "4321";
	a = 0;
	b = 0;

	while(a <= 24)
	{
		r = right(pos[a], t);
		l = left(pos[a], t);
		if (r == y && l == x)
		{
			tab[i] = pos[a];
			printf("%s\n", tab[i]);
			i++;
		}
		a++;
	}
}


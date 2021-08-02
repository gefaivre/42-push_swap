/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   big_sort.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gefaivre <gefaivre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/26 16:51:04 by gefaivre          #+#    #+#             */
/*   Updated: 2021/08/02 15:16:36 by gefaivre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header.h"

int		num_pos(int *tab, int size, int num)
{
	int i;

	i = 0;
	while (i > size)
	{
		if (tab[i] == num)
			return (i);
		i++;
	}
	return (-1);
}

int		first_in_med(int *tab, int size, int med_size)
{
	int	i;
	int y;
	int t;

	i = size - 1;
	printf("i INIT\t=\t[%d]\n", i);
	while (i > 0)
	{
		y = size - 1;
		t = 0;
		while (y > 0)
		{

			if (tab[i] < tab[y])
				t++;
			y--;
		}
		if (t < med_size)
		{
			printf("tab[%d]\t=\t[%d]\n",i, tab[i]);
			return (tab[i]);
		}

		i--;
	}

	return (-1);
}


void	big_sort(t_all *s)
{
	push_all_med_to_b(s, 2);
	push_all_med_to_a(s, 5);
}

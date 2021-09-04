/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_in_med.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gefaivre <gefaivre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/30 16:43:22 by gefaivre          #+#    #+#             */
/*   Updated: 2021/09/05 00:52:42 by gefaivre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header.h"

int		first_in_med_bot(int *tab, int size, int med_size, int swap)
{
	int	i;
	int y;
	int t;

	i = 0;
	while (i < size - 1)
	{
		y = 0;
		t = 0;
		while (y < size - 1)
		{
			if (tab[i] > tab[y] && swap == 1)
				t++;
			if (tab[i] < tab[y] && swap == 2)
				t++;
			y++;
		}
		if (t < med_size)
		{
			return (tab[i]);
		}
		i++;
	}
	return (-1);
}

int		first_in_med_top(int *tab, int size, int med_size, int swap)
{
	int	i;
	int y;
	int t;

	i = size - 1;
	while (i > 0)
	{
		y = size - 1;
		t = 0;
		while (y > 0)
		{
			if (tab[i] > tab[y] && swap == 1)
				t++;
			if (tab[i] < tab[y] && swap == 2)
				t++;
			y--;
		}
		if (t < med_size)
		{
			return (tab[i]);
		}
		i--;
	}
	return (-1);
}

int	first_in_med(int *tab, int size, int med_size, int swap)
{
	int top;
	int bot;

	top = first_in_med_top(tab, size, med_size, swap);
	bot = first_in_med_bot(tab, size, med_size, swap);

	/* printf("top\t=\t[%d]\n", size - top);
	printf("bot\t=\t[%d]\n", bot); */

	/* if (swap == 1)
		return (top); */
	/* if (size - num_pos(tab, size, top) > num_pos(tab, size, bot) )
		return (bot); */
	return (top);
}

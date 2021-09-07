/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gefaivre <gefaivre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/24 22:47:40 by gefaivre          #+#    #+#             */
/*   Updated: 2021/09/07 17:25:02 by gefaivre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header.h"

int	is_sort(int *tab, int len)
{
	int	i;

	i = 1;
	while (i < len)
	{
		if (tab[i - 1] < tab[i])
		{
			return (0);
		}
		i++;
	}
	return (1);
}

void	ckeck_duplicates(t_all *s, int *tab, int size)
{
	int	i;
	int	y;

	i = 0;
	while (i < size)
	{
		y = 0;
		while (y < size)
		{
			if (tab[i] == tab [y] && i != y)
				ft_quit(s, "Error", "Duplicate");
			y++;
		}
		i++;
	}
}

int	is_min(int nb, int *tab, int size, int old_min)
{
	int	i;

	i = 0;
	while (i < size)
	{
		if (nb > tab[i] && nb < old_min)
		{
			return (0);
		}
		i++;
	}
	return (1);
}

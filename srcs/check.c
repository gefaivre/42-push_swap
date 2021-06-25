/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gefaivre <gefaivre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/24 22:47:40 by gefaivre          #+#    #+#             */
/*   Updated: 2021/06/25 10:27:15 by gefaivre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header.h"


int is_sort(int *tab, int len)
{
	int i;

	i = 1;
	while (i < len)
	{
		if(tab[i - 1] < tab[i])
			return (-1);
		i++;
	}
	return (0);
}

int	ckeck_duplicates(int *tab, int size)
{
	int i;
	int y;

	i = 0;
	while (i < size)
	{
		y = 0;
		while (y < size)
		{
			if (tab[i] == tab [y] && i != y)
				return (-1);
			y++;
		}
		i++;
	}
	return (0);
}

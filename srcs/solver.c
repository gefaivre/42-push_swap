/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solver.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gefaivre <gefaivre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/26 16:51:04 by gefaivre          #+#    #+#             */
/*   Updated: 2021/06/26 18:02:41 by gefaivre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header.h"


int		find_min_pos(int *tab, int size)
{
	int i;
	int	min_val;
	int min_pos;

	i = 0;
	min_pos = 0;
	min_val = tab[0];
	while (i < size)
	{
		if (min_val > tab[i])
		{
			min_val = tab[i];
			min_pos = i;
		}

		i++;
	}
	return (min_pos);
}


void solver(t_all *data)
{

	int i;
	int y = 0;
	int min_pos;

	while (data->stack_a.size)
	{
		pb(data);
	}

	while (y < data->size)
	{
		min_pos = find_min_pos(data->stack_b.tab,data->stack_b.size);
		i = 0;
		if (data->stack_b.size - min_pos - 1 < data->stack_b.size / 2)
			while (i < data->stack_b.size - min_pos - 1)
			{
				rb(data);
				i++;
			}
		else
			while (i < min_pos + 1)
			{
				rrb(data);
				i++;
			}
		pa(data);
		y++;
	}

}

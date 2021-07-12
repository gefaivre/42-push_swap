/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solver.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gefaivre <gefaivre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/26 16:51:04 by gefaivre          #+#    #+#             */
/*   Updated: 2021/07/12 12:33:07 by gefaivre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header.h"

int	is_in_chunk(int nb, int *tab, int size)
{
	int i;

	i = 0;
	while (i < size)
	{
		if (i == tab[i])
			return (1);
		i++;
	}
	return (0);
}


int better_nb(t_all *data)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (i > 0)
	{
		if (is_in_chunk(data->chunk_stack[i], data->chunk[j], 10))
			j = i;
		i--;
	}
	i = 0;
	while (!is_in_chunk(data->chunk_stack[i], data->chunk[j], 10))
		i++;
	if (data->size - j < i)
		return (j);
	else
	return (i);

}

void	push_chunk_to_b(t_all *data)
{
	int i;

	i = 0;
	while (i < 10)
	{
		better_nb(t_all *data);
		i++;
	}

}















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

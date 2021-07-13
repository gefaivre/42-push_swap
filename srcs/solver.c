/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solver.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gefaivre <gefaivre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/26 16:51:04 by gefaivre          #+#    #+#             */
/*   Updated: 2021/07/13 17:59:10 by gefaivre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header.h"

int	is_in_chunk(int nb, int *tab, int size)
{
	int i;

	i = 0;
	while (i < size)
	{
		if (nb == tab[i])
			return (1);
		i++;
	}
	return (0);
}


int put_on_top(t_all *data, int chunk)
{
	int i;
	int j;

	j = data->stack_a.size - 1;
	while (is_in_chunk(data->stack_a.tab[j], data->chunk[chunk], 10) != 1)
		j--;
	i = 0;
	while (is_in_chunk(data->stack_a.tab[i], data->chunk[chunk], 10) != 1)
		i++;
	/* printf("j\t=\t[%d]\t=\t%i\n", j, data->stack_a.tab[j]);
	printf("i\t=\t[%d]\t=\t%i\n", i, data->stack_a.tab[i]);
	printf("\nstack_a.size -1 - j\t=\t[%i]\ni + 1\t\t\t=\t[%i]\n",data->stack_a.size -1 - j, i + 1);
	printf("data->stack_a.size\t=\t[%d]\n", data->stack_a.size); */

	if (i + 1 < data->stack_a.size -1 - j)
	{
		while (i != -1)
		{
			rra(data);
			i--;
		}
		return (1);
	}
	else
	{
		while (j != data->stack_a.size - 1 )
		{
			j++;
			ra(data);
		}
		return (1);
	}
	return (0);
}
void	push_chunk_to_b(t_all *data)
{
	int i;
	int j;
	int k;

	i = 0;
	j = 0;
	while (i < 4)
	{
		put_on_top(data, j);
		print_stack(data);
		k = data->stack_b.size;
		printf("data->stack_a.size - 1\t=\t[%d]\n", data->stack_a.size - 1);
		printf("k \t=\t[%d]\n", k);
		while (data->stack_a.tab[data->stack_a.size - 1] < data->stack_b.tab[k - 1] && k > 1)
		{
			printf("rb\n");
			rb(data);
			k--;
		}
		pb(data);
		i++;
		if (i % 10 == 0)
		{

			j++;
		}
	}
	/* pb(data); */

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

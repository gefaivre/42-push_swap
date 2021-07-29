/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   big_sort.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gefaivre <gefaivre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/26 16:51:04 by gefaivre          #+#    #+#             */
/*   Updated: 2021/07/29 18:26:44 by gefaivre         ###   ########.fr       */
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
			printf("tab[i]\t=\t[%d]\n", tab[i]);
			return (tab[i]);
		}

		i--;
	}

	return (-1);
}

void	opti_pb(t_all *s, int num, int med_size)
{
	print_stack(s);
	if (num_pos(s->stack_a.tab, s->stack_a.size, num) > s->size / med_size)
		while (s->stack_a.tab[s->stack_a.size - 1] != num)
		{
			rra(s);
		}
	else
		while (s->stack_a.tab[s->stack_a.size - 1] != num)
		{
			ra(s);
		}

	pb(s);
}

void	push_med_b(t_all *s, int med_size)
{
	int nb_by_med_t;
	int nb_by_med;

	nb_by_med_t = s->stack_a.size / med_size;
	nb_by_med = nb_by_med_t;
	if (s->stack_a.size == 1)
		pb(s);
	while (nb_by_med > 0)
	{
		opti_pb(s, first_in_med(s->stack_a.tab, s->stack_a.size, nb_by_med), med_size);
		nb_by_med--;
	}
}

void	push_all_med_to_b(t_all *s, int med_size)
{
	if (s->size <= 100)
	{
		while (s->stack_a.size > 0)
		{
			push_med_b(s, med_size);
		}
	}
}



void	big_sort(t_all *s)
{
	push_all_med_to_b(s, 2);
	push_all_med_to_a(s, 2);
}

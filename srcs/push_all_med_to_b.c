/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_all_med_to_b.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gefaivre <gefaivre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/02 15:05:23 by gefaivre          #+#    #+#             */
/*   Updated: 2021/09/03 16:14:13 by gefaivre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header.h"

void	opti_pb(t_all *s, int num, int med_size)
{
	(void)med_size;
	/* printf("num\t=\t[%d]\n", num);
	printf("\tnum_pos = \t[%d]\n", num_pos(s->stack_a.tab, s->stack_a.size, num)); */
	if (num_pos(s->stack_a.tab, s->stack_a.size, num) < s->stack_a.size / 2)
		while (s->stack_a.tab[s->stack_a.size - 1] != num)
		{
			/* printf("ici ???????\n"); */
			rra(s);
		}
	else
		while (s->stack_a.tab[s->stack_a.size - 1] != num)
		{
			/* printf("et ici ???????\n"); */

			ra(s);
		}

	pb(s);
}

void	push_med_b(t_all *s, int med_size, int min)
{
	int nb_by_med;

	nb_by_med = s->stack_a.size / med_size;
	if (s->stack_a.size == 1)
		pb(s);
	while (nb_by_med > 0 && s->stack_a.size > min)
	{
		opti_pb(s, first_in_med(s->stack_a.tab, s->stack_a.size, nb_by_med, 1), med_size);
		nb_by_med--;
	}
}

void	push_all_med_to_b(t_all *s)
{
	int min;
	int med_size;

	min = 10;
	med_size = 2;
	if (s->size <= 100)
	{
		min = 10;
		med_size = 2;
		while (s->stack_a.size > min)
		{
			push_med_b(s, med_size, min);

		}
	}
	else if (s->size <= 500)
	{
		min = 10;
		med_size = 5;
		while (s->stack_a.size > min)
		{
			push_med_b(s, med_size, min);
		}
	}
}

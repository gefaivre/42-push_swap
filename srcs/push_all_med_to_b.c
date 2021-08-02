/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_all_med_to_b.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gefaivre <gefaivre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/02 15:05:23 by gefaivre          #+#    #+#             */
/*   Updated: 2021/08/02 15:06:25 by gefaivre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header.h"

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

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_all_med_to_b.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gefaivre <gefaivre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/02 15:05:23 by gefaivre          #+#    #+#             */
/*   Updated: 2021/09/06 00:13:06 by gefaivre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header.h"

void	opti_pb(t_all *s, int num, int med_size)
{
	(void)med_size;
	if (num_pos(s->stack_a.tab, s->stack_a.size, num) < (s->stack_a.size / 2) + 1)
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

void	push_med_b(t_all *s, int med_size, int min)
{
	int nb_by_med;

	nb_by_med = s->stack_a.size / med_size;
	if (s->stack_a.size == 1)
		pb(s);
	while (nb_by_med > 0 && s->stack_a.size > min)
	{
		opti_pb(s, first_in_med(s->stack_a.tab, s->stack_a.size,
			nb_by_med, 1), med_size);
		nb_by_med--;
	}
}

void	push_all_med_to_b(t_all *s)
{
	if(s->size <= 5)
	{
		while (s->stack_a.size > 1)
		{
			push_med_b(s, 2, 0);
		}
	}
	if (s->size <= 100)
	{
		while (s->stack_a.size > 10)
		{
			push_med_b(s, 2, 10);
		}

	}
	else if (s->size <= 500)
	{
		while (s->stack_a.size > 10)
		{
			push_med_b(s, 5, 10);
		}
	}

}

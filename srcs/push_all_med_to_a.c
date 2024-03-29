/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_all_med_to_a.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gefaivre <gefaivre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/02 15:11:53 by gefaivre          #+#    #+#             */
/*   Updated: 2021/09/07 17:34:04 by gefaivre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header.h"

void	opti_pa(t_all *s, int num, int med_size)
{
	(void)med_size;
	if (num_pos(s->stack_b.tab, s->stack_b.size, num) < (s->stack_b.size / 2))
		while (s->stack_b.tab[s->stack_b.size - 1] != num)
			rrb(s);
	else
		while (s->stack_b.tab[s->stack_b.size - 1] != num)
			rb(s);
	pa(s);
}

void	push_med_a(t_all *s, int med_size, int min)
{
	int	nb_by_med;

	nb_by_med = s->stack_b.size / med_size;
	if (nb_by_med == 0)
		nb_by_med = 1;
	while (nb_by_med > 0 && s->stack_b.size > min)
	{
		opti_pa(s, first_in_med(s->stack_b.tab, s->stack_b.size,
				nb_by_med, 2), med_size);
		nb_by_med--;
	}
}

void	push_all_med_to_a(t_all *s)
{
	if (s->size <= 100)
	{
		while (s->stack_b.size > 10)
		{
			push_med_a(s, 3, 10);
		}
	}
	else if (s->size <= 500)
	{
		while (s->stack_b.size > 10)
		{
			push_med_a(s, 4, 10);
		}
	}
}

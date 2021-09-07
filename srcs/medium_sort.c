/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   medium_sort.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gefaivre <gefaivre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/06 00:00:23 by gefaivre          #+#    #+#             */
/*   Updated: 2021/09/07 17:30:40 by gefaivre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header.h"

void	insertion(t_all *s)
{
	if (s->stack_b.tab[s->i] > find_max(s->stack_a.tab, s->stack_a.size))
	{
		while (s->stack_a.tab[s->stack_a.size - 1]
			!= find_min(s->stack_a.tab, s->stack_a.size))
			ra(s);
		pa(s);
	}
	else if (s->stack_b.tab[s->i] < find_min(s->stack_a.tab, s->stack_a.size))
	{
		while (s->stack_a.tab[s->stack_a.size - 1]
			!= find_min(s->stack_a.tab, s->stack_a.size))
			ra(s);
		pa(s);
	}
	else
	{
		while (s->stack_a.tab[s->stack_a.size - 1] < s->stack_b.tab[s->i]
			|| s->stack_a.tab[0] > s->stack_b.tab[s->i])
			ra(s);
		pa(s);
	}
	s->i--;
}

void	medium_sort(t_all *s)
{
	pb(s);
	pb(s);
	mini_sort(s);
	s->i = 1;
	while (s->i >= 0)
		insertion(s);
	while (!(is_sort(s->stack_a.tab, s->stack_a.size)))
	{
		if (num_pos(s->stack_a.tab, s->stack_a.size, find_min(s->stack_a.tab,
					s->stack_a.size)) < (s->stack_a.size / 2) + 1)
			rra(s);
		else
			ra(s);
	}
}

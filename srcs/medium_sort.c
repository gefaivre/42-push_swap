/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   medium_sort.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gefaivre <gefaivre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/06 00:00:23 by gefaivre          #+#    #+#             */
/*   Updated: 2021/09/06 00:55:04 by gefaivre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header.h"


void	medium_sort(t_all *s)
{
	s->i = 1;
	pb(s);
	pb(s);

	mini_sort(s);
	while (s->i >= 0)
	{
		ft_max(s);
		if (s->stack_b.tab[s->i] > s->max)
		{
			pa(s);
			ra(s);
		}
		else if (s->stack_b.tab[s->i] <find_min(s->stack_a.tab, s->stack_a.size))
			pa(s);
		else
		{
			while (s->stack_a.tab[s->stack_a.size - 1] < s->stack_b.tab[1] && s->stack_a.tab[0] > s->stack_b.tab[1])
				ra(s);
			pa(s);
			ra(s);

		}
		s->i--;
	}
	while (!(is_sort(s->stack_a.tab, s->stack_a.size)))
		ra(s);
}

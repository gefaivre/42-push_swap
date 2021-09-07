/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrr.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gefaivre <gefaivre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/26 14:51:33 by gefaivre          #+#    #+#             */
/*   Updated: 2021/09/04 22:59:21 by gefaivre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../header.h"

void	rra_in_rrr(t_all *s)
{
	int i;
	int temp;
	int temp1;

	i = 1;
	temp1 = s->stack_a.tab[0];
	temp = 0;
	if (s->stack_a.size > 0)
	{
		while (i < s->stack_a.size)
		{
			temp = s->stack_a.tab[i];
			s->stack_a.tab[i - 1] = s->stack_a.tab[i];
			s->stack_a.tab[i] = temp;
			i++;
		}
		s->stack_a.tab[s->stack_a.size - 1] = temp1;
	}
}

void	rrb_in_rrr(t_all *s)
{
	int i;
	int temp;
	int temp1;

	i = 1;
	temp1 = s->stack_b.tab[0];
	temp = 0;
	if (s->stack_b.size > 0)
	{
		while (i < s->stack_b.size)
		{
			temp = s->stack_b.tab[i];
			s->stack_b.tab[i - 1] = s->stack_b.tab[i];
			s->stack_b.tab[i] = temp;
			i++;
		}
		s->stack_b.tab[s->stack_b.size - 1] = temp1;
	}
}

void	rrr(t_all *s)
{
	rra_in_rrr(s);
	rrb_in_rrr(s);
	s->count++;
	printf("rrr\n");
	if (s->verbose == 1)
		print_stack(s);
}

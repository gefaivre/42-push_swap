/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ss.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gefaivre <gefaivre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/25 10:53:33 by gefaivre          #+#    #+#             */
/*   Updated: 2021/07/29 17:55:43 by gefaivre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../header.h"

void	sa_in_ss(t_all *s)
{
	int temp;

	if (s->stack_a.size > 1)
	{
		temp = s->stack_a.tab[s->stack_a.size - 1];
		s->stack_a.tab[s->stack_a.size - 1] = s->stack_a.tab[s->stack_a.size - 2];
		s->stack_a.tab[s->stack_a.size - 2] = temp;
	}
}

void	sb_in_ss(t_all *s)
{
	int temp;

	if (s->stack_b.size > 1)
	{
		temp = s->stack_b.tab[s->stack_b.size - 1];
		s->stack_b.tab[s->stack_b.size - 1] = s->stack_b.tab[s->stack_b.size - 2];
		s->stack_b.tab[s->stack_b.size - 2] = temp;
	}
}

void	ss(t_all *s)
{
	sa_in_ss(s);
	sb_in_ss(s);
	s->count++;
	printf("\t\tSS :\n");
	print_stack(s);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrb.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gefaivre <gefaivre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/26 14:49:42 by gefaivre          #+#    #+#             */
/*   Updated: 2021/07/29 17:55:16 by gefaivre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../header.h"

void	rrb(t_all *s)
{
	int i;
	int temp;
	int temp1;

	i = 0;
	temp1 = s->stack_b.tab[0];
	while (i < s->stack_b.size)
	{
		temp = s->stack_b.tab[i];
		s->stack_b.tab[i - 1] = s->stack_b.tab[i];
		s->stack_b.tab[i] = temp;
		i++;
	}
	s->stack_b.tab[s->stack_b.size - 1] = temp1;
	s->count++;
	printf("\t\tRRB :\n");
	print_stack(s);

}

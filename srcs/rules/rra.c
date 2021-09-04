/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rra.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gefaivre <gefaivre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/26 14:36:11 by gefaivre          #+#    #+#             */
/*   Updated: 2021/09/04 23:05:49 by gefaivre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../header.h"

void	rra(t_all *s)
{
	int i;
	int temp;
	int temp1;

	i = 0;
	temp1 = s->stack_a.tab[0];
	while (i < s->stack_a.size)
	{
		temp = s->stack_a.tab[i];
		s->stack_a.tab[i - 1] = s->stack_a.tab[i];
		s->stack_a.tab[i] = temp;
		i++;
	}
	s->stack_a.tab[s->stack_a.size - 1] = temp1;
	s->count++;
	printf("rra\n");
	if (s->verbose == 1)
		print_stack(s);

}

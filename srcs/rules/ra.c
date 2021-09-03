/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ra.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gefaivre <gefaivre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/25 11:56:03 by gefaivre          #+#    #+#             */
/*   Updated: 2021/09/03 16:19:46 by gefaivre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../header.h"

void	ra(t_all *s)
{
	int i;
	int temp;
	int temp1;

	i = s->stack_a.size - 1;
	temp1 = s->stack_a.tab[i];
	while (i > 0)
	{
		temp = s->stack_a.tab[i];
		s->stack_a.tab[i] = s->stack_a.tab[i - 1];
		s->stack_a.tab[i - 1] = temp;
		i--;
	}
	s->stack_a.tab[0] = temp1;
	s->count++;
	printf("ra\n");
	/* print_stack(s); */

}

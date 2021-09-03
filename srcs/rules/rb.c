/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gefaivre <gefaivre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/25 13:39:53 by gefaivre          #+#    #+#             */
/*   Updated: 2021/09/03 16:19:46 by gefaivre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../header.h"

void	rb(t_all *s)
{
	int i;
	int temp;
	int temp1;

	i = s->stack_b.size - 1;
	temp1 = s->stack_b.tab[i];
	while (i > 0)
	{
		temp = s->stack_b.tab[i];
		s->stack_b.tab[i] = s->stack_b.tab[i - 1];
		s->stack_b.tab[i - 1] = temp;
		i--;
	}
	s->stack_b.tab[0] = temp1;
	s->count++;
	printf("rb\n");
	/* print_stack(s); */

}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gefaivre <gefaivre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/25 10:57:15 by gefaivre          #+#    #+#             */
/*   Updated: 2021/08/26 16:20:22 by gefaivre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../header.h"

void	pa(t_all *s)
{
	if (s->stack_b.size > 0)
	{
		s->stack_a.tab[s->stack_a.size] = s->stack_b.tab[s->stack_b.size - 1];
		s->stack_b.size--;
		s->stack_a.size++;
		s->count++;
		printf("PA\n");
		/* print_stack(s); */
	}
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gefaivre <gefaivre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/25 10:32:36 by gefaivre          #+#    #+#             */
/*   Updated: 2021/09/04 22:59:25 by gefaivre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../header.h"

void	sa(t_all *s)
{
	int temp;

	if (s->stack_a.size > 1)
	{
		temp = s->stack_a.tab[s->stack_a.size - 1];
		s->stack_a.tab[s->stack_a.size - 1] = s->stack_a.tab[s->stack_a.size - 2];
		s->stack_a.tab[s->stack_a.size - 2] = temp;
	}
	s->count++;
	printf("sa\n");
	if (s->verbose == 1)
		print_stack(s);

}

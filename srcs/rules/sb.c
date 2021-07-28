/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gefaivre <gefaivre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/25 10:50:49 by gefaivre          #+#    #+#             */
/*   Updated: 2021/07/15 11:09:59 by gefaivre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../header.h"

void	sb(t_all *s)
{
	int temp;

	if (s->stack_b.size > 1)
	{
		temp = s->stack_b.tab[s->stack_b.size - 1];
		s->stack_b.tab[s->stack_b.size - 1] = s->stack_b.tab[s->stack_b.size - 2];
		s->stack_b.tab[s->stack_b.size - 2] = temp;
	}
	s->count++;

}

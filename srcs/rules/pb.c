/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gefaivre <gefaivre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/25 11:52:06 by gefaivre          #+#    #+#             */
/*   Updated: 2021/07/29 17:54:18 by gefaivre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../header.h"

void	pb(t_all *s)
{
	if (s->stack_a.size > 0)
	{
		s->stack_b.tab[s->stack_b.size] = s->stack_a.tab[s->stack_a.size - 1];
		s->stack_a.size--;
		s->stack_b.size++;
		s->count++;
		printf("\t\tPB :\n");
		print_stack(s);
	}
}

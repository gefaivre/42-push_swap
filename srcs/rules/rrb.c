/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrb.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gefaivre <gefaivre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/26 14:49:42 by gefaivre          #+#    #+#             */
/*   Updated: 2021/09/07 18:18:08 by gefaivre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../header.h"

void	rrb(t_all *s)
{
	int	i;
	int	temp;
	int	temp1;

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
		s->count++;
		ft_putstr_fd("rrb\n", 1);
	}
}

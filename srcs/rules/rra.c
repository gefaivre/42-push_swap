/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rra.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gefaivre <gefaivre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/26 14:36:11 by gefaivre          #+#    #+#             */
/*   Updated: 2021/09/07 18:18:06 by gefaivre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../header.h"

void	rra(t_all *s)
{
	int	i;
	int	temp;
	int	temp1;

	i = 1;
	temp1 = s->stack_a.tab[0];
	temp = 0;
	if (s->stack_a.size > 0)
	{
		while (i < s->stack_a.size)
		{
			temp = s->stack_a.tab[i];
			s->stack_a.tab[i - 1] = s->stack_a.tab[i];
			s->stack_a.tab[i] = temp;
			i++;
		}
		s->stack_a.tab[s->stack_a.size - 1] = temp1;
		s->count++;
		ft_putstr_fd("rra\n", 1);
	}
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rr.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gefaivre <gefaivre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/25 13:43:47 by gefaivre          #+#    #+#             */
/*   Updated: 2021/09/07 18:18:04 by gefaivre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../header.h"

void	ra_in_rr(t_all *s)
{
	int	i;
	int	temp;
	int	temp1;

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
}

void	rb_in_rr(t_all *s)
{
	int	i;
	int	temp;
	int	temp1;

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
}

void	rr(t_all *s)
{
	ra_in_rr(s);
	rb_in_rr(s);
	s->count++;
	ft_putstr_fd("rr\n", 1);
}

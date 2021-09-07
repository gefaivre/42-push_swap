/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gefaivre <gefaivre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/07 17:08:08 by gefaivre          #+#    #+#             */
/*   Updated: 2021/09/07 17:49:09 by gefaivre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header.h"

int	num_pos(int *tab, int size, int num)
{
	int	i;

	i = 0;
	while (i < size)
	{
		if (tab[i] == num)
			return (i);
		i++;
	}
	return (-1);
}

int	find_min(int *tab, int size)
{
	int	i;
	int	nb;

	i = 0;
	nb = tab[0];
	while (i < size)
	{
		if (tab[i] < nb)
			nb = tab[i];
		i++;
	}
	return (nb);
}

void	set_first_min(t_all *s)
{
	int	i;

	i = 0;
	s->min.val = s->stack_a.tab[0];
	while (i < s->stack_a.size)
	{
		if (s->stack_a.tab[i] < s->min.val)
		{
			s->min.val = s->stack_a.tab[i];
			s->min.tab = 'a';
		}
		i++;
	}
	i = 0;
	while (i < s->stack_b.size)
	{
		if (s->stack_b.tab[i] < s->min.val)
		{
			s->min.val = s->stack_b.tab[i];
			s->min.tab = 'b';
		}
		i++;
	}
}

void	ft_max(t_all *s)
{
	int	max;
	int	i;

	i = 0;
	max = -2147483648;
	while (i < s->size)
	{
		if (s->stack_a.tab[i] > max)
			max = s->stack_a.tab[i];
		i++;
	}
	s->max = max;
}

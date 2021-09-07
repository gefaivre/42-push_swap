/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gefaivre <gefaivre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/24 22:47:40 by gefaivre          #+#    #+#             */
/*   Updated: 2021/09/07 15:08:46 by gefaivre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header.h"



void line_value(t_all *s)
{
	if (!ft_strncmp(s->line,"ra",ft_strlen(s->line) | 2))
		ra(s);
	if (!ft_strncmp(s->line,"rb",ft_strlen(s->line) | 2))
		rb(s);
	if (!ft_strncmp(s->line,"rr",ft_strlen(s->line) | 2))
		rr(s);
	if (!ft_strncmp(s->line,"pa",ft_strlen(s->line) | 2))
		pa(s);
	if (!ft_strncmp(s->line,"pb",ft_strlen(s->line) | 2))
		pb(s);
	if (!ft_strncmp(s->line,"rra",ft_strlen(s->line) | 2))
		rra(s);
	if (!ft_strncmp(s->line,"rrb",ft_strlen(s->line) | 2))
		rrb(s);
	if (!ft_strncmp(s->line,"rrr",ft_strlen(s->line) | 2))
		rrr(s);
	if (!ft_strncmp(s->line,"sa",ft_strlen(s->line) | 2))
		sa(s);
	if (!ft_strncmp(s->line,"sb",ft_strlen(s->line) | 2))
		sb(s);
	if (!ft_strncmp(s->line,"ss",ft_strlen(s->line) | 2))
		ss(s);
}


int is_sort(int *tab, int len)
{
	int i;

	i = 1;
	while (i < len)
	{
		if(tab[i - 1] < tab[i])
		{
			return (0);
		}
		i++;
	}
	return (1);
}

void	ckeck_duplicates(t_all *s, int *tab, int size)
{
	int i;
	int y;

	i = 0;
	while (i < size)
	{
		y = 0;
		while (y < size)
		{
			if (tab[i] == tab [y] && i != y)
				ft_quit(s, "Error", "Duplicate");
			y++;
		}
		i++;
	}
}

int is_min(int nb, int *tab, int size, int old_min)
{
	int i;

	i = 0;
	while (i < size)
	{
			if (nb > tab[i] && nb < old_min)
			{
				/* printf("nb\t=\t[%d]\n", nb);
				printf("tab[i]\t=\t[%d]\n", tab[i]); */
				return (0);
			}
		i++;
	}
	return (1);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_all.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gefaivre <gefaivre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/24 22:58:12 by gefaivre          #+#    #+#             */
/*   Updated: 2021/09/03 13:52:23 by gefaivre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header.h"

void	ft_max(t_all *s)
{
	int max;
	int i;

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

void	set_utils(t_all *s)
{
	ft_max(s);
}

void	set_var(t_all *s, int ac)
{
	s->stack_a.tab = NULL;
	s->stack_b.tab = NULL;
	s->size = ac -1;
	s->stack_a.size = s->size;
	s->stack_b.size = 0;
	s->count = 0;
	s->div = 0;
}

int		malloc_stacks(t_all *s, int ac)
{
	s->stack_a.tab = malloc(sizeof(int) * ac - 1);
	s->stack_b.tab = malloc(sizeof(int) * ac - 1);
	if (!s->stack_a.tab || !s->stack_b.tab)
		ft_quit(s, "malloc foire");
	return (0);
}

void	fill_stack(int *tab, int ac,char **av)
{
	int i;
	int y;

	i = ac - 2;
	y = 0;
	while (i >= 0)
	{
		tab[y] = atoi(av[i + 1]);
		i--;
		y++;
	}
}

void	fill_void_stack(int *tab, int ac,char c)
{
	int i;

	i = 0;
	while (i < ac - 1)
	{
		tab[i] = c;
		i++;
	}
}

void	ft_set(t_all *s, int ac, char **av)
{
	set_var(s, ac);
	all_params_is_int(s, av);
	malloc_stacks(s, ac);
	fill_stack(s->stack_a.tab,ac , av);
	ckeck_duplicates(s, s->stack_a.tab, s->stack_a.size);
	set_utils(s);
}



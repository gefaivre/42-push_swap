/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   big_sort.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gefaivre <gefaivre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/26 16:51:04 by gefaivre          #+#    #+#             */
/*   Updated: 2021/08/26 16:10:44 by gefaivre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header.h"

int		num_pos(int *tab, int size, int num)
{
	int i;

	i = 0;
	while (i > size)
	{
		if (tab[i] == num)
			return (i);
		i++;
	}
	return (-1);
}


int		first_in_med(int *tab, int size, int med_size, int swap)
{
	int	i;
	int y;
	int t;

	i = size - 1;
	while (i > 0)
	{
		y = size - 1;
		t = 0;
		while (y > 0)
		{
			if (tab[i] > tab[y] && swap == 1)
				t++;
			if (tab[i] < tab[y] && swap == 2)
				t++;
			y--;
		}
		if (t < med_size)
		{
			return (tab[i]);
		}
		i--;
	}
	return (-1);
}

void	set_next_min(t_all *s, int old_min)
{
	int i;
	int min_a;
	int min_b;

	i = 0;
	min_a = s->stack_a.tab[s->stack_a.size - 1];
	while (i < s->stack_a.size - 1)
	{
		if (s->stack_a.tab[i] < min_a && s->stack_a.tab[i] > old_min)
			min_a = s->stack_a.tab[i];
		i++;
	}
	i = 0;
	if (s->stack_b.size > 0)
	{
		min_b = s->stack_b.tab[s->stack_b.size - 1];
		while (i < s->stack_b.size - 1)
		{
			if (s->stack_b.tab[i] < min_b && s->stack_b.tab[i] > old_min)
			{
				min_b = s->stack_b.tab[i];
			}
			i++;
		}
	}
	else
		min_b = 2147483647;
	if (min_a < min_b && min_a > old_min)
	{
		s->next_min.tab = 'a';
		s->next_min.val = min_a;
	}
	else
	{
		s->next_min.tab = 'b';
		s->next_min.val = min_b;
	}
}

int		find_min(int *tab, int size)
{
	int i;
	int nb;

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

void	put_min(t_all *s)
{
	if (s->next_min.tab == 'a')
	{
		while (s->stack_a.tab[s->stack_a.size-1] != s->next_min.val)
			pb(s);
		ra(s);
	}
	else
	{
		while (s->stack_b.tab[s->stack_b.size-1] != s->next_min.val)
			rb(s);
		pa(s);
		ra(s);
	}
}

void	big_sort(t_all *s)
{
	int i;
	int min;

	i = 0;
	push_all_med_to_b(s, 2);
	push_all_med_to_a(s, 3);

	min = s->stack_a.tab[s->stack_a.size - 1];
	while (i < s->stack_a.size - 1)
	{
		if (s->stack_a.tab[i] < min)
			min = s->stack_a.tab[i];
		i++;
	}
	i = 0;
	while (!(is_sort(s->stack_a.tab, s->stack_a.size) && s->stack_a.size == s->size))
	{
		if (i != 0)
			min = s->stack_a.tab[0];


		set_next_min(s ,min);
		put_min(s);
/* 		usleep(1000000); */
	i++;

	}
}

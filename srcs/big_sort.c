/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   big_sort.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gefaivre <gefaivre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/26 16:51:04 by gefaivre          #+#    #+#             */
/*   Updated: 2021/08/03 18:10:25 by gefaivre         ###   ########.fr       */
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
	printf("i INIT\t=\t[%d]\n", i);
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
			printf("tab[%d]\t=\t[%d]\n",i, tab[i]);
			return (tab[i]);
		}
		i--;
	}
	return (-1);
}

void	find_next_min(t_all *s, int old_min)
{
	int i;
	int min_a;
	int min_b;

	i = 0;
	min_a = s->stack_a.tab[s->stack_a.size - 1];
	while (i < s->stack_a.size)
	{
		if (s->stack_a.tab[i] < min_a && s->stack_a.tab[i] > old_min)
			min_a = s->stack_a.tab[i];
		i++;
	}
	min_b = min_a;
	i = 0;
	while (i < s->stack_b.size)
	{
		if (s->stack_b.tab[i] < min_b && s->stack_b.tab[i] > old_min)
		{
			min_b = s->stack_b.tab[i];
		}
		i++;
	}
	if (min_b < min_a)
	{
		while (s->stack_b.tab[s->stack_b.size - 1] != min_b)
		{
			rb(s);
		}
		pa(s);
		ra(s);
	}
	else
	{
		while (is_min(s->stack_a.tab[s->stack_a.size - 1], s->stack_a.tab, s->stack_a.size) == 0)
			pb(s);
		ra(s);
	}

}

void	big_sort(t_all *s)
{
	push_all_med_to_b(s, 2);
	printf("ETAPE 2                                  ||||||||||||||||||||||||\n");
	push_all_med_to_a(s, 2);

/* 	printf("s->stack_a.tab[s->stack_a.size - 1]\t=\t[%d]\n", s->stack_a.tab[s->stack_a.size - 1]); */
		while (is_min(s->stack_a.tab[s->stack_a.size - 1], s->stack_a.tab, s->stack_a.size) == 0)
			pb(s);
		ra(s);
	while (is_sort(s->stack_a.tab, s->stack_a.size) != 1)
	{
		find_next_min(s ,s->stack_a.tab[0]);
	}
}

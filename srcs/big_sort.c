/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   big_sort.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gefaivre <gefaivre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/26 16:51:04 by gefaivre          #+#    #+#             */
/*   Updated: 2021/08/04 17:51:40 by gefaivre         ###   ########.fr       */
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
	while (i < s->stack_a.size - 1)
	{
		if (s->stack_a.tab[i] < min_a && s->stack_a.tab[i] > old_min)
			min_a = s->stack_a.tab[i];
		i++;
	}
	min_b = s->stack_b.tab[s->stack_b.size - 1];
	i = 0;

	while (i < s->stack_b.size - 1)
	{
		if (s->stack_b.tab[i] < min_b && s->stack_b.tab[i] > old_min)
		{
			min_b = s->stack_b.tab[i];
		}
		i++;
	}
	printf("min_a\t=\t[%d]\n", min_a);
	printf("min_b\t=\t[%d]\n", min_b);
	if (min_a < min_b)
	{
		printf("ca rentre ici ?\n");
		while (is_min(s->stack_a.tab[s->stack_a.size - 1], s->stack_a.tab, s->stack_a.size, old_min) == 0 )
			pb(s);
	}
	else
	{
		while (s->stack_b.tab[s->stack_b.size - 1] != min_b)
		{
			printf("et ici ca rentre ?\n");
			rb(s);
		}
		pa(s);
	}
	ra(s);
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

void	big_sort(t_all *s)
{
	int i;
	int min;

	i = 0;
	push_all_med_to_b(s, 2);
	printf("ETAPE 2                                  ||||||||||||||||||||||||\n");
	push_all_med_to_a(s, 2);

/* 	printf("s->stack_a.tab[s->stack_a.size - 1]\t=\t[%d]\n", s->stack_a.tab[s->stack_a.size - 1]); */
	while (is_sort(s->stack_a.tab, s->stack_a.size) != 1 || s->stack_a.size != s->size)
	{
		if (i == 0)
			min = find_min(s->stack_a.tab, s->stack_a.size);
		else
			min = s->stack_a.tab[0];

		printf("MIN OLD MIN\t=\t[%d]\n", min);

		find_next_min(s ,min);
		usleep(1000000);
		i++;
	}
}

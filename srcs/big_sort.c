/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   big_sort.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gefaivre <gefaivre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/26 16:51:04 by gefaivre          #+#    #+#             */
/*   Updated: 2021/09/04 20:25:26 by gefaivre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header.h"

int		num_pos(int *tab, int size, int num)
{
	int i;

	i = 0;
	while (i < size)
	{
		if (tab[i] == num)
			return (i);
		i++;
	}
	return (-1);
}


void	set_next_min(t_all *s)
{
	int i;
	int min_a;
	int min_b;

	i = 0;
	min_a = s->max;
	/* printf("s->min.val in set next min\t=\t[%d]\n", s->min.val); */
	while (i < s->stack_a.size )
	{
		/* printf("s->stack_a.tab[i] IN THE WHILE \t=\t[%d]\n", s->stack_a.tab[i]);
			printf("s->max\t=\t[%d]\n", s->max); */
		if (s->stack_a.tab[i] < min_a && s->stack_a.tab[i] > s->min.val)
		{
			/* printf("s->stack_a.tab[i]\t=\t[%d]\n", s->stack_a.tab[i]); */
			min_a = s->stack_a.tab[i];
		}
		i++;
	}

	/* printf("STACK B!\n"); */
	i = 0;
	if (s->stack_b.size > 0)
	{
		min_b = s->max;
		while (i < s->stack_b.size)
		{
			/* printf("s->stack_b.tab[i] IN THE WHILE \t=\t[%d]\n", s->stack_b.tab[i]);
			printf("s->max\t=\t[%d]\n", s->max);
 */
			if (s->stack_b.tab[i] < min_b && s->stack_b.tab[i] > s->min.val)
			{
				/* printf("s->stack_b.tab[i]\t=\t[%d]\n", s->stack_b.tab[i]); */
				min_b = s->stack_b.tab[i];
			}
			i++;
		}
	}
	else
		min_b = 2147483647;

	/* printf("min_a\t=\t[%d]\n", min_a);
	printf("min_b\t=\t[%d]\n", min_b); */
	if (min_a < min_b && min_a > s->min.val)
	{
		s->next_min.tab = 'a';
		s->next_min.val = min_a;
	}
	else
	{
		s->next_min.tab = 'b';
		s->next_min.val = min_b;
	}
	/* printf("s->min.val | s->min.tab in set next min\t=\t[%d] | [%c]\n", s->min.val, s->min.tab);
	printf("s->next_min.val | s->next_min.tab\t=\t[%d] | [%c]\n", s->next_min.val, s->next_min.val); */
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
	if (s->min.tab == 'a')
	{
		while (s->stack_a.tab[s->stack_a.size - 1] != s->min.val)
		{
			if (s->stack_a.tab[s->stack_a.size - 2] == s->min.val)
				{
					sa(s);
					return;
				}
			pb(s);
		}
	}
	else
		opti_pa(s, s->min.val, 2);
}

char where_is_min(t_all *s)
{
	int i;

	i = 0;
	while (i < s->stack_a.size)
	{
		if (s->stack_a.tab[i] == s->min.val)
			return ('a');
		i++;
	}
	i = 0;
	while (i < s->stack_b.size)
	{
		if (s->stack_b.tab[i] == s->min.val)
			return ('b');
		i++;
	}
	return ('c');
}

void	big_sort(t_all *s)
{
	int i;

	push_all_med_to_b(s);
	push_all_med_to_a(s);
	printf("PARTIE 3 !!!!!!!!!!!!!!!!!!!!!!!!!\n");
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
		/* printf("s->stack_b.tab[i]\t=\t[%d]\n", s->stack_b.tab[i]); */
		if (s->stack_b.tab[i] < s->min.val)
		{
			s->min.val = s->stack_b.tab[i];
			s->min.tab = 'b';
		}
		i++;
	}
	i = 0;
	/* printf("BEFORE WHILEs->min.val\t=\t[%d]\n", s->min.val);
	printf("BEFORE WHILEs->min.tab\t=\t[%c]\n", s->min.tab); */
	while (!(is_sort(s->stack_a.tab, s->stack_a.size) && s->stack_a.size == s->size))
	{
		set_next_min(s);
		s->min.tab = where_is_min(s);
		put_min(s);
		/* printf("s->=min.tab\t=\t[%c], s->=min.val\t=\t[%d]\n", s->min.tab, s->min.val);
		printf("s->next_min.tab\t=\t[%c], s->next_min.val\t=\t[%d]\n", s->next_min.tab, s->next_min.val); */
		if (s->next_min.tab == 'b' && num_pos(s->stack_b.tab, s->stack_b.size, s->next_min.val) != s->stack_b.size -1 && num_pos(s->stack_b.tab, s->stack_b.size, s->next_min.val) > (s->stack_b.size / 2) - 1)
		{
			rr(s);
		}
		else
			ra(s);
		s->min.tab = s->next_min.tab;
		s->min.val = s->next_min.val;
		i++;
	}
}

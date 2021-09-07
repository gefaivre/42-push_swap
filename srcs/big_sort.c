/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   big_sort.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gefaivre <gefaivre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/26 16:51:04 by gefaivre          #+#    #+#             */
/*   Updated: 2021/09/07 17:17:53 by gefaivre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header.h"

void	find_mina_and_minb(t_all *s)
{
	s->i = 0;
	s->min_a = s->max;
	while (s->i < s->stack_a.size)
	{
		if (s->stack_a.tab[s->i] < s->min_a
			&& s->stack_a.tab[s->i] > s->min.val)
			s->min_a = s->stack_a.tab[s->i];
		s->i++;
	}
	s->i = 0;
	if (s->stack_b.size > 0)
	{
		s->min_b = s->max;
		while (s->i < s->stack_b.size)
		{
			if (s->stack_b.tab[s->i] < s->min_b
				&& s->stack_b.tab[s->i] > s->min.val)
				s->min_b = s->stack_b.tab[s->i];
			s->i++;
		}
	}
	else
		s->min_b = 2147483647;
}

void	set_next_min(t_all *s)
{
	find_mina_and_minb(s);
	if (s->min_a < s->min_b && s->min_a > s->min.val)
	{
		s->next_min.tab = 'a';
		s->next_min.val = s->min_a;
	}
	else
	{
		s->next_min.tab = 'b';
		s->next_min.val = s->min_b;
	}
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
				return ;
			}
			pb(s);
		}
	}
	else
		opti_pa(s, s->min.val, 2);
}

char	where_is_min(t_all *s)
{
	int	i;

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
	int	i;

	push_all_med_to_b(s);
	push_all_med_to_a(s);
	set_first_min(s);
	i = 0;
	while (!(is_sort(s->stack_a.tab, s->stack_a.size)
			&& s->stack_a.size == s->size))
	{
		set_next_min(s);
		s->min.tab = where_is_min(s);
		put_min(s);
		if (s->next_min.tab == 'b' && num_pos(s->stack_b.tab,
				s->stack_b.size, s->next_min.val) != s->stack_b.size - 1
			&& num_pos(s->stack_b.tab, s->stack_b.size, s->next_min.val)
			> (s->stack_b.size / 2) - 1)
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

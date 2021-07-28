/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   big_sort.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gefaivre <gefaivre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/26 16:51:04 by gefaivre          #+#    #+#             */
/*   Updated: 2021/07/28 16:58:42 by gefaivre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header.h"

int		first_in_med(t_all *s, int *tab, int size, int med_size)
{
	int	i;
	int y;
	int t;

	i = 0;
	while (i < s->stack_a.size)
	{
		y = 0;
		t = 0;
		while (y < size)
		{
			if (tab[i] > tab[y])
				t++;
			y++;
		}
		printf("t\t=\t[%d]\n", t);
		if (t < med_size)
		{
			printf("tab[i]\t=\t[%d]\n", tab[i]);
			return (tab[i]);
		}

		i++;
	}
	printf("bug bg");
	return (0);
}

void	opti_pb(t_all *s, int num)
{
	printf("num\t=\t[%d]\n", num);
	while (s->stack_a.tab[s->stack_a.size - 1] != num)
	{
		printf("s->stack_a.tab[s->stack_a.size]\t=\t[%d]\n", s->stack_a.tab[s->stack_a.size]);
		/*  printf("boucle\n");*/
		ra(s);
	}
	pb(s);
}

void	push_med_b(t_all *s, int med_size)
{
	int nb_by_med_t;
	int nb_by_med;

	nb_by_med_t = s->stack_a.size / med_size;
	nb_by_med = nb_by_med_t;
	while (nb_by_med > 0)
	{
		opti_pb(s, first_in_med(s, s->stack_a.tab, s->stack_a.size, nb_by_med));
		nb_by_med--;
	}
	printf("s->stack_a.size\t=\t[%d]\n", s->stack_a.size);
}

void	push_all_med_to_b(t_all *s, int med_size)
{
	if (s->size <= 100)
	{
		/* while (s->stack_a.size > 0)
		{ */
			push_med_b(s, med_size);
		/* } */
	}
}



void	big_sort(t_all *s)
{
	printf("s->stack_a.size\t=\t[%d]\n", s->stack_a.size);
	push_all_med_to_b(s, 2);
	/* push_med_to_a(); */
}

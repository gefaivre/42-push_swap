/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_all_med_to_a.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gefaivre <gefaivre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/02 15:11:53 by gefaivre          #+#    #+#             */
/*   Updated: 2021/09/04 00:09:12 by gefaivre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header.h"

void	opti_pa(t_all *s, int num, int med_size)
{
	(void)med_size;
	/* printf("num\t=\t[%d]\n", num);
	printf("\tnum_pos = \t[%d]\n", num_pos(s->stack_b.tab, s->stack_b.size, num)); */
	if (num_pos(s->stack_b.tab, s->stack_b.size, num) < (s->stack_b.size / 2))
		while (s->stack_b.tab[s->stack_b.size - 1] != num)
		{
			/* printf("ici ???????\n"); */
			rrb(s);
		}
	else
		while (s->stack_b.tab[s->stack_b.size - 1] != num)
		{
			/* printf("et ici ???????\n"); */

			rb(s);
		}
	pa(s);
}

void	push_med_a(t_all *s, int med_size,int min)
{
	int nb_by_med;

	nb_by_med = s->stack_b.size / med_size;
	if (nb_by_med == 0)
		nb_by_med = 1;
	/* if (s->stack_b.size <= med_size)
	{
		while (s->stack_b.size > 0)
		{
			pa(s);
		}
		return;
	} */

	while (nb_by_med > 0 && s->stack_b.size > min)
	{
		opti_pa(s, first_in_med(s->stack_b.tab, s->stack_b.size, nb_by_med, 2), med_size);
		nb_by_med--;
	}
}

void	push_all_med_to_a(t_all *s)
{
	int min;
	int med_size;

	min = 10;
	med_size = 3;
	if (s->size <= 100)
	{
		min = 10;
		med_size = 3;
		while (s->stack_b.size > s->size - s->size/4)
		{
			push_med_a(s, 100, 0);
		}
		/* printf("\033[0;32mFIN DE LA MOITIER\033[0m\n"); */
		while (s->stack_b.size > min)
		{
			push_med_a(s, med_size, min);
		}
	}
	else if (s->size <= 500)
	{
		min = 10;
		med_size = 4;
		while (s->stack_b.size > min)
		{
			push_med_a(s, med_size, min);
		}
	}
}

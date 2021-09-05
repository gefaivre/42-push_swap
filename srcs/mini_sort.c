/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mini_sort.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gefaivre <gefaivre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/05 22:14:28 by gefaivre          #+#    #+#             */
/*   Updated: 2021/09/06 00:57:35 by gefaivre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header.h"

int		find_max(int *tab, int size)
{
	int i;
	int nb;

	i = 0;
	nb = tab[0];
	while (i < size)
	{
		if (tab[i] > nb)
			nb = tab[i];
		i++;
	}
	return (nb);
}

void	mini_sort(t_all *s)
{
	int max_pos;


	max_pos = num_pos(s->stack_a.tab, s->stack_a.size, find_max(s->stack_a.tab, s->stack_a.size));

	if (max_pos == 1)
		rra(s);
	else if (max_pos == 2)
		ra(s);

	/* int test =	is_sort(s->stack_a.tab, s->stack_a.size);

	printf("test\t=\t[%d]\n", test); */

	if (!(is_sort(s->stack_a.tab, s->stack_a.size)))
		sa(s);
}

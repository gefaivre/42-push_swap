/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gefaivre <gefaivre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/25 05:52:16 by gefaivre          #+#    #+#             */
/*   Updated: 2021/07/15 11:28:42 by gefaivre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header.h"

void	print_stack(t_all *s)
{
	int i;

	i = s->size - 1;
	printf("\n\n");
	while (i >=0)
	{
		printf("\t\t");
		printf("[%d]\t", i);
		if (i < s->stack_a.size)
			printf("%i",s->stack_a.tab[i]);
		else
			printf(".");
		printf("\t|\t");
		if (i < s->stack_b.size)
			printf("%i",s->stack_b.tab[i]);
		else
			printf(".");
		printf("\n");

		i--;
	}
	printf("\n\n");
}

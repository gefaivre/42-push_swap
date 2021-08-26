/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gefaivre <gefaivre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/25 05:52:16 by gefaivre          #+#    #+#             */
/*   Updated: 2021/08/26 15:46:16 by gefaivre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header.h"

void	print_stack(t_all *s)
{
	int i;

	i = s->size - 1;
	while (i >=0)
	{
		printf("[%d]\t", i);

		if(i < s->stack_a.size)
			printf("%i\t",s->stack_a.tab[i]);
		else
			printf("/\t");



		for(int y = 0; y < s->size; y++)
			if(y < s->stack_a.tab[i] && i < s->stack_a.size)
				printf(".");
			else
				printf(" ");


		printf("|");
		printf("[%d]\t", i);

		if(i < s->stack_b.size)
			printf("%i\t",s->stack_b.tab[i]);
		else
			printf("/\t");
		for(int y = 0; y < s->size; y++)
			if(y < s->stack_b.tab[i] && i < s->stack_b.size)
				printf(".");
			else
				printf(" ");
		printf("\n");

		i--;
	}
	printf("\n\n\n");
	usleep(50000);
}

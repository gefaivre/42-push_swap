/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gefaivre <gefaivre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/25 05:52:16 by gefaivre          #+#    #+#             */
/*   Updated: 2021/06/28 12:50:19 by gefaivre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header.h"

void	print_stack(t_all *data)
{
	int i;

	i = data->size - 1;
	while (i >= 0)
	{
		printf("\t\t");
		if (i < data->stack_a.size)
			printf("%i",data->stack_a.tab[i]);
		else
			printf(".");
		printf("\t|\t");
		if (i < data->stack_b.size)
			printf("%i",data->stack_b.tab[i]);
		else
			printf(".");
		printf("\n");

		i--;
	}
	printf("\n\n");
}

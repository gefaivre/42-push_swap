/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gefaivre <gefaivre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/25 05:52:16 by gefaivre          #+#    #+#             */
/*   Updated: 2021/07/12 10:42:19 by gefaivre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header.h"

void	print_stack(t_all *data)
{
	int i;

	i = 0;
	while (i <= data->size - 1)
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

		i++;
	}
	printf("\n\n");
}

void	print_chunk_stack(t_all *data)
{
	int i;
	int y;

	i = 0;
	while (i < data->nb_chunk)
	{
		y = 0;
		while (y < 10)
		{
			printf("data->chunk[%i][%i]\t=\t[%d]\n",i,y, data->chunk[i][y]);
			y++;
		}
		i++;
	}

}

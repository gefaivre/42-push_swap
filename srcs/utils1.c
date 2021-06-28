/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils1.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gefaivre <gefaivre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/28 11:48:14 by gefaivre          #+#    #+#             */
/*   Updated: 2021/06/28 14:49:53 by gefaivre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header.h"

void	swap_in_stack_a(t_all *data, int pos1, int pos2)
{
	int p;
	int i;

	p = 0;
	i = 0;
	if (pos1 < data->size/2 || pos2 < data->size/2)
		while (pos1 != 0 && pos2 != 0)
		{
			rra(data);
			pos1--;
			pos2--;
			printf("rra\n");
		}
	else
		while (pos1 != data->size  && pos2 != data->size )
		{
			ra(data);
			pos1++;
			pos2++;

			printf("ra\n");
		}
	if (pos1 == 0)
			p = pos2;
	else
			p = pos1;
			printf("pos1\t=\t[%d]\n", pos1);
			printf("pos2\t=\t[%d]\n", pos2);
			printf("p\t=\t[%d]\n", p);
		print_stack(data);
	pb(data);
	print_stack(data);


	if (p < data->size / 2 )
		while (p != 0)
		{
			rra(data);
			p--;
			i--;
			printf("\nrra\n");
		}
	else
		while (p != data->size - 1)
		{
			ra(data);
			p++;
			i++;
			printf("\nra\n");
		}

	print_stack(data);


	pb(data);
	sb(data);
	pa(data);
	printf("oui\n");
	print_stack(data);

	if (i < 0)
		while (i != 0)
		{
			i++;
			ra(data);
			printf("ra\n");
		}
	else
		while (i != 0)
		{
			i--;
			rra(data);
			printf("rra\n");
		}
	printf("hh\n");
	print_stack(data);

	pa(data);
}

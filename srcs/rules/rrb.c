/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrb.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gefaivre <gefaivre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/26 14:49:42 by gefaivre          #+#    #+#             */
/*   Updated: 2021/06/26 17:22:54 by gefaivre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../header.h"

void	rrb(t_all *data)
{
	int i;
	int temp;
	int temp1;

	i = 0;
	temp1 = data->stack_b.tab[0];
	while (i < data->stack_b.size)
	{
		temp = data->stack_b.tab[i];
		data->stack_b.tab[i - 1] = data->stack_b.tab[i];
		data->stack_b.tab[i] = temp;
		i++;
	}
	data->stack_b.tab[data->stack_b.size - 1] = temp1;
	data->count++;

}

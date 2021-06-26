/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rra.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gefaivre <gefaivre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/26 14:36:11 by gefaivre          #+#    #+#             */
/*   Updated: 2021/06/26 14:48:56 by gefaivre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../header.h"

void	rra(t_all *data)
{
	int i;
	int temp;
	int temp1;

	i = 0;
	temp1 = data->stack_a.tab[0];
	while (i < data->stack_a.size)
	{
		temp = data->stack_a.tab[i];
		data->stack_a.tab[i - 1] = data->stack_a.tab[i];
		data->stack_a.tab[i] = temp;
		i++;
	}
	data->stack_a.tab[data->stack_a.size - 1] = temp1;

}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gefaivre <gefaivre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/25 13:39:53 by gefaivre          #+#    #+#             */
/*   Updated: 2021/06/26 17:22:44 by gefaivre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../header.h"

void	rb(t_all *data)
{
	int i;
	int temp;
	int temp1;

	i = data->stack_b.size - 1;
	temp1 = data->stack_b.tab[i];
	while (i > 0)
	{
		temp = data->stack_b.tab[i];
		data->stack_b.tab[i] = data->stack_b.tab[i - 1];
		data->stack_b.tab[i - 1] = temp;
		i--;
	}
	data->stack_b.tab[0] = temp1;
	data->count++;

}

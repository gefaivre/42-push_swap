/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ra.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gefaivre <gefaivre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/25 11:56:03 by gefaivre          #+#    #+#             */
/*   Updated: 2021/06/25 14:37:23 by gefaivre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../header.h"

void	ra(t_all *data)
{
	int i;
	int temp;
	int temp1;

	i = 0;
	temp1 = data->stack_a.tab[i];
	while (i < data->stack_a.size && data->stack_a.tab[i] != '.')
	{
		temp = data->stack_a.tab[i];
		data->stack_a.tab[i] = data->stack_a.tab[i - 1];
		data->stack_a.tab[i - 1] = temp;
		i++;
	}
	data->stack_a.tab[i - 1] = temp1;

}

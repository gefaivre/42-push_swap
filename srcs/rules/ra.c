/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ra.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gefaivre <gefaivre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/25 11:56:03 by gefaivre          #+#    #+#             */
/*   Updated: 2021/06/26 13:53:45 by gefaivre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../header.h"

void	ra(t_all *data)
{
	int i;
	int temp;
	int temp1;

	i = data->stack_a.size - 1;
	temp1 = data->stack_a.tab[i];
	while (i > 0)
	{
		temp = data->stack_a.tab[i];
		data->stack_a.tab[i] = data->stack_a.tab[i - 1];
		data->stack_a.tab[i - 1] = temp;
		i--;
	}
	data->stack_a.tab[0] = temp1;

}

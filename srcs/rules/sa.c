/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gefaivre <gefaivre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/25 10:32:36 by gefaivre          #+#    #+#             */
/*   Updated: 2021/06/26 17:23:02 by gefaivre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../header.h"

void	sa(t_all *data)
{
	int temp;

	if (data->stack_a.size > 1)
	{
		temp = data->stack_a.tab[data->stack_a.size - 1];
		data->stack_a.tab[data->stack_a.size - 1] = data->stack_a.tab[data->stack_a.size - 2];
		data->stack_a.tab[data->stack_a.size - 2] = temp;
	}
	data->count++;

}

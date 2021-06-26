/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gefaivre <gefaivre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/25 10:50:49 by gefaivre          #+#    #+#             */
/*   Updated: 2021/06/26 14:33:47 by gefaivre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../header.h"

void	sb(t_all *data)
{
	int temp;

	if (data->stack_b.size > 1)
	{
		temp = data->stack_b.tab[data->stack_b.size - 1];
		data->stack_b.tab[data->stack_b.size - 1] = data->stack_b.tab[data->stack_b.size - 2];
		data->stack_b.tab[data->stack_b.size - 2] = temp;
	}

}

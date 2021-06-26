/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gefaivre <gefaivre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/25 10:57:15 by gefaivre          #+#    #+#             */
/*   Updated: 2021/06/26 14:13:02 by gefaivre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../header.h"

void	pa(t_all *data)
{
	if (data->stack_b.size > 0)
	{
		data->stack_a.tab[data->stack_a.size] = data->stack_b.tab[data->stack_b.size - 1];
		data->stack_b.size--;
		data->stack_a.size++;
	}

}

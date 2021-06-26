/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gefaivre <gefaivre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/25 11:52:06 by gefaivre          #+#    #+#             */
/*   Updated: 2021/06/26 14:06:54 by gefaivre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../header.h"

void	pb(t_all *data)
{
	if (data->stack_a.size > 0)
	{
		data->stack_b.tab[data->stack_b.size] = data->stack_a.tab[data->stack_a.size - 1];
		data->stack_a.size--;
		data->stack_b.size++;
	}
}

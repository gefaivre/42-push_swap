/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gefaivre <gefaivre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/25 11:52:06 by gefaivre          #+#    #+#             */
/*   Updated: 2021/06/25 14:27:06 by gefaivre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../header.h"

void	pb(t_all *data)
{
	int i;

	i = 0;
	while (i < data->stack_a.size && data->stack_a.tab[i] != '.')
		i++;
	if (i >= 1)
	{
		data->stack_b.tab[data->stack_b.size - i] = data->stack_a.tab[i];
		data->stack_a.tab[i] = '.';
	}

}

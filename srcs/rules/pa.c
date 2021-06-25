/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gefaivre <gefaivre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/25 10:57:15 by gefaivre          #+#    #+#             */
/*   Updated: 2021/06/25 14:27:01 by gefaivre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../header.h"

void	pa(t_all *data)
{
	int i;

	i = 0;
	while (i < data->stack_b.size && data->stack_b.tab[i] != '.')
		i++;
	if (i >= 1)
	{
		data->stack_a.tab[data->stack_a.size - i] = data->stack_b.tab[i];
		data->stack_b.tab[i] = '.';
	}

}

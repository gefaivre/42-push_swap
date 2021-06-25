/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gefaivre <gefaivre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/25 10:50:49 by gefaivre          #+#    #+#             */
/*   Updated: 2021/06/25 10:56:09 by gefaivre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../header.h"

void	sb(t_all *data)
{
	int i;
	int temp;

	i = 0;
	while (i < data->stack_b.size && data->stack_b.tab[i] != '.')
		i++;
	if (i >= 2)
	{
		temp = data->stack_b.tab[i];
		data->stack_b.tab[i] = data->stack_b.tab[i - 1];
		data->stack_b.tab[i - 1] = temp;
	}

}

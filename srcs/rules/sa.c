/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gefaivre <gefaivre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/25 10:32:36 by gefaivre          #+#    #+#             */
/*   Updated: 2021/06/25 10:56:29 by gefaivre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../header.h"

void	sa(t_all *data)
{
	int i;
	int temp;

	i = 0;
	while (i < data->stack_a.size && data->stack_a.tab[i] != '.')
		i++;
	if (i >= 2)
	{
		temp = data->stack_a.tab[i];
		data->stack_a.tab[i] = data->stack_a.tab[i - 1];
		data->stack_a.tab[i - 1] = temp;
	}

}

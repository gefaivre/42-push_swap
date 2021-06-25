/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gefaivre <gefaivre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/25 13:39:53 by gefaivre          #+#    #+#             */
/*   Updated: 2021/06/25 13:40:39 by gefaivre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../header.h"

void	rb(t_all *data)
{
	int i;
	int temp;

	i = 0;
	while (i < data->stack_b.size && data->stack_b.tab[i] != '.')
	{
		temp = data->stack_b.tab[i];
		data->stack_b.tab[i] = data->stack_b.tab[i - 1];
		data->stack_b.tab[i - 1] = temp;
		i++;
	}

}

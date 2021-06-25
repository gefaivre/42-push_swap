/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   quit.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gefaivre <gefaivre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/24 22:35:04 by gefaivre          #+#    #+#             */
/*   Updated: 2021/06/25 04:44:46 by gefaivre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header.h"

void	ft_free(t_all *data)
{
	if (data->stack_a.tab)
		free(data->stack_a.tab);
	if (data->stack_b.tab)
		free(data->stack_b.tab);
}

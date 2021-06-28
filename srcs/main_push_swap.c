/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_push_swap.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gefaivre <gefaivre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/24 21:20:47 by gefaivre          #+#    #+#             */
/*   Updated: 2021/06/28 14:50:40 by gefaivre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header.h"



int main(int ac, char **av)
{
	t_all data;
	if (ft_set(&data, ac, av) == -1)
	{
		ft_free(&data);
		return (-1);
	}

	print_stack(&data);
	printf("\n\n");

	swap_in_stack_a(&data, 1, 2);
	swap_in_stack_a(&data, 1, 7);

	while (find_min_pos(data.stack_a.tab, data.stack_a.size) != 0)
	{
		ra(&data);
	}



	print_stack(&data);
	printf("\n\n");

	printf("data.count\t=\t[%d]\n", data.count);
	ft_free(&data);
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_push_swap.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gefaivre <gefaivre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/24 21:20:47 by gefaivre          #+#    #+#             */
/*   Updated: 2021/06/26 15:51:13 by gefaivre         ###   ########.fr       */
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
	int temp = data.stack_a.size;

	for(int i = 0;i <= temp/2 - 1;i++)
		pb(&data);


	print_stack(&data);
	printf("\n\n");


	sa(&data);
	sa(&data);

	print_stack(&data);
	ft_free(&data);
	return (0);
}

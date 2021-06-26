/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_checker.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gefaivre <gefaivre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/24 21:20:47 by gefaivre          #+#    #+#             */
/*   Updated: 2021/06/26 16:32:30 by gefaivre         ###   ########.fr       */
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

	get_next_line(0, &data.line);
	line_value(&data);
	while (data.line[0])
	{
		get_next_line(0, &data.line);
		line_value(&data);
	}

	print_stack(&data);

	if(is_sort(data.stack_a.tab, data.size) == 1)
		printf("OK\n");
	else
		printf("KO\n");

	ft_free(&data);
	return (0);
}

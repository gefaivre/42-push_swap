/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_checker.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gefaivre <gefaivre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/24 21:20:47 by gefaivre          #+#    #+#             */
/*   Updated: 2021/07/28 14:20:42 by gefaivre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header.h"


int main(int ac, char **av)
{
	t_all s;
	if (ft_set(&s, ac, av) == -1)
	{
		ft_free(&s);
		return (-1);
	}

	get_next_line(0, &s.line);
	line_value(&s);
	while (s.line[0])
	{
		get_next_line(0, &s.line);
		line_value(&s);
	}

	print_stack(&s);

	if(is_sort(s.stack_a.tab, s.size) == 1)
		printf("OK\n");
	else
		printf("KO\n");

	ft_free(&s);
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_push_swap.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gefaivre <gefaivre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/24 21:20:47 by gefaivre          #+#    #+#             */
/*   Updated: 2021/08/26 16:22:51 by gefaivre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header.h"

int main(int ac, char **av)
{
	t_all s;

	if (ac <= 2)
		ft_quit(&s, "ac < 2");
	ft_set(&s, ac, av);
	if (s.size < 3)
		printf("size < 3\n");
	else if (s.size < 10)
		printf("size < 10\n");
	else
		big_sort(&s);

	/* print_stack(&s); */
	/* printf("s.count\t=\t[%d]\n", s.count); */
	ft_quit(&s, "");
	return (0);
}






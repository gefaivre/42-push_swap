/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_push_swap.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gefaivre <gefaivre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/24 21:20:47 by gefaivre          #+#    #+#             */
/*   Updated: 2021/09/06 00:48:21 by gefaivre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header.h"

int main(int ac, char **av)
{
	t_all s;

	if (av[ac - 1][0] == '-' && av[ac - 1][1] == 'v')
	{
		ac--;
		s.verbose = 1;
	}
	else
		s.verbose = 0;
	ft_set(&s, ac, av);
	if(s.verbose == 1)
	{
		print_stack(&s);
		printf("s.count\t=\t[%d]\n", s.count);
		printf("s.size\t=\t[%d]\n", s.size);
	}
	if (is_sort(s.stack_a.tab, s.stack_a.size))
	{
		ft_quit(&s, "", "is sort");
	}

	if (ac <= 2)
		ft_quit(&s, "", "ac < 2");
	if (s.size <= 3)
		mini_sort(&s);
	else if (s.size <= 5)
		medium_sort(&s);
	else
		big_sort(&s);

	if(s.verbose == 1)
	{
		print_stack(&s);
		printf("s.count\t=\t[%d]\n", s.count);
	}
	ft_quit(&s, "", "");
	return (0);
}






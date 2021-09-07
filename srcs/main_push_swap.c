/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_push_swap.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gefaivre <gefaivre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/24 21:20:47 by gefaivre          #+#    #+#             */
/*   Updated: 2021/09/07 17:27:54 by gefaivre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header.h"

int	main(int ac, char **av)
{
	t_all	s;

	ft_set(&s, ac, av);
	if (is_sort(s.stack_a.tab, s.stack_a.size))
		ft_quit(&s, "", "is sort");
	if (ac <= 2)
		ft_quit(&s, "Error", "ac < 2");
	if (s.size <= 3)
		mini_sort(&s);
	else if (s.size <= 5)
		medium_sort(&s);
	else
		big_sort(&s);
	ft_quit(&s, "", "END main");
	return (0);
}

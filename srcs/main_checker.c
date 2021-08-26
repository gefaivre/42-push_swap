/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_checker.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gefaivre <gefaivre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/24 21:20:47 by gefaivre          #+#    #+#             */
/*   Updated: 2021/08/26 16:57:58 by gefaivre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header.h"


int main()
{
	t_all s;

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

	ft_quit(&s, "");
	return (0);
}

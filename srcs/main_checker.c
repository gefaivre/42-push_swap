/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_checker.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gefaivre <gefaivre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/24 21:20:47 by gefaivre          #+#    #+#             */
/*   Updated: 2021/06/26 15:53:24 by gefaivre         ###   ########.fr       */
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
	while (data.line[0])
	{
		get_next_line(0, &data.line);
		if (!ft_strncmp(data.line,"ra",ft_strlen(data.line) | 2))
			ra(&data);
		if (!ft_strncmp(data.line,"rb",ft_strlen(data.line) | 2))
			rb(&data);
		if (!ft_strncmp(data.line,"rr",ft_strlen(data.line) | 2))
			rr(&data);
		if (!ft_strncmp(data.line,"pa",ft_strlen(data.line) | 2))
			pa(&data);
		if (!ft_strncmp(data.line,"pb",ft_strlen(data.line) | 2))
			pb(&data);
		if (!ft_strncmp(data.line,"rra",ft_strlen(data.line) | 2))
			rra(&data);
		if (!ft_strncmp(data.line,"rrb",ft_strlen(data.line) | 2))
			rrb(&data);
		if (!ft_strncmp(data.line,"rrr",ft_strlen(data.line) | 2))
			rrr(&data);
		if (!ft_strncmp(data.line,"sa",ft_strlen(data.line) | 2))
			sa(&data);
		if (!ft_strncmp(data.line,"sb",ft_strlen(data.line) | 2))
			sb(&data);
		if (!ft_strncmp(data.line,"ss",ft_strlen(data.line) | 2))
			ss(&data);
	}

	print_stack(&data);

	if(is_sort(data.stack_a.tab, data.size) == 1)
	{
		printf("gg\n");
	}
	else
	{
		printf("nul\n");
	}


	ft_free(&data);
	return (0);
}

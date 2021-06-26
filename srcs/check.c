/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gefaivre <gefaivre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/24 22:47:40 by gefaivre          #+#    #+#             */
/*   Updated: 2021/06/26 16:28:20 by gefaivre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header.h"



void line_value(t_all *data)
{
	if (!ft_strncmp(data->line,"ra",ft_strlen(data->line) | 2))
		ra(data);
	if (!ft_strncmp(data->line,"rb",ft_strlen(data->line) | 2))
		rb(data);
	if (!ft_strncmp(data->line,"rr",ft_strlen(data->line) | 2))
		rr(data);
	if (!ft_strncmp(data->line,"pa",ft_strlen(data->line) | 2))
		pa(data);
	if (!ft_strncmp(data->line,"pb",ft_strlen(data->line) | 2))
		pb(data);
	if (!ft_strncmp(data->line,"rra",ft_strlen(data->line) | 2))
		rra(data);
	if (!ft_strncmp(data->line,"rrb",ft_strlen(data->line) | 2))
		rrb(data);
	if (!ft_strncmp(data->line,"rrr",ft_strlen(data->line) | 2))
		rrr(data);
	if (!ft_strncmp(data->line,"sa",ft_strlen(data->line) | 2))
		sa(data);
	if (!ft_strncmp(data->line,"sb",ft_strlen(data->line) | 2))
		sb(data);
	if (!ft_strncmp(data->line,"ss",ft_strlen(data->line) | 2))
		ss(data);
}


int is_sort(int *tab, int len)
{
	int i;

	i = 1;
	while (i < len)
	{
		if(tab[i - 1] > tab[i])
			return (-1);
		i++;
	}
	return (1);
}

int	ckeck_duplicates(int *tab, int size)
{
	int i;
	int y;

	i = 0;
	while (i < size)
	{
		y = 0;
		while (y < size)
		{
			if (tab[i] == tab [y] && i != y)
				return (-1);
			y++;
		}
		i++;
	}
	return (0);
}

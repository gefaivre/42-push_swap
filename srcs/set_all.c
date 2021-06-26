/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_all.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gefaivre <gefaivre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/24 22:58:12 by gefaivre          #+#    #+#             */
/*   Updated: 2021/06/26 14:00:23 by gefaivre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header.h"

void	set_var(t_all *data, int ac)
{
	data->stack_a.tab = NULL;
	data->stack_b.tab = NULL;
	data->size = ac -1;
	data->stack_a.size = data->size;
	data->stack_b.size = 0;

}

int		malloc_stacks(t_all *data, int ac)
{
	data->stack_a.tab = malloc(sizeof(int) * ac - 1);
	data->stack_b.tab = malloc(sizeof(int) * ac - 1);
	if (!data->stack_a.tab || !data->stack_b.tab)
		return (-1);
	return (0);
}

void	fill_stack(int *tab, int ac,char **av)
{
	int i;

	i = 0;
	while (i < ac - 1)
	{
		tab[i] = atoi(av[i + 1]);
		i++;
	}
}

void	fill_void_stack(int *tab, int ac,char c)
{
	int i;

	i = 0;
	while (i < ac - 1)
	{
		tab[i] = c;
		i++;
	}
}

int	ft_set(t_all *data, int ac, char **av)
{
	if (ac <= 1)
		return (-1);
	set_var(data, ac);
	if (all_params_is_int(av) == -1)
		return (-1);
	if (malloc_stacks(data, ac) == -1)
		return (-1);
	fill_stack(data->stack_a.tab,ac , av);
	if (ckeck_duplicates(data->stack_a.tab, data->stack_a.size))
		return (-1);

	return (0);
}



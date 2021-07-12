/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_push_swap.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gefaivre <gefaivre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/24 21:20:47 by gefaivre          #+#    #+#             */
/*   Updated: 2021/07/12 10:57:57 by gefaivre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header.h"


void	malloc_chunk(t_all *data)
{
	int i;

	data->nb_chunk = data->size / 10;
	if (data->size % 10 != 0)
		data->nb_chunk++;
	printf("nb_chunk\t=\t[%d]\n", data->nb_chunk);
	data->chunk = malloc(sizeof(int *) * data->nb_chunk);
	if (!(data->chunk))
		return;
		i = 0;
	while (i < data->nb_chunk)
	{
		data->chunk[i] = malloc(sizeof(int) * 10);
		i++;
	}
}

int	found_update_min(int *tab, int size)
{
	int i;
	int x;
	int t;

	i = 0;
	t = 0;
	while (i <= size)
	{
		if (tab[i] < tab[t])
			t = i;
		i++;
	}
	x = tab[size];
	tab[size] = tab[t];
	tab[t] = x;
	return (tab[size]);
}


void	set_chunk(t_all *data)
{
	int i;
	int c;
	int u;
	int nb_chunk_stack;

	i = 0;
	c = 0;
	u = 0;
	nb_chunk_stack = data->size ;
	while (i < data->size)
	{
		data->chunk[c][u] = found_update_min(data->chunk_stack, --nb_chunk_stack);
		u++;
		if (u == 10)
		{
			u = 0;
			c++;
		}
		i++;
	}


}



void	sort(t_all *data)
{
	malloc_chunk(data);
	set_chunk(data);
	print_chunk_stack(data);
	push_chunk_to_b(data);
}



int main(int ac, char **av)
{
	t_all data;
	if (ft_set(&data, ac, av) == -1)
	{
		ft_free(&data);
		return (-1);
	}

/* 	print_stack(&data);
	printf("\n\n"); */

	sort(&data);

	/* print_stack(&data);
	printf("\n\n"); */

	printf("data.count\t=\t[%d]\n", data.count);
	ft_free(&data);
	return (0);
}






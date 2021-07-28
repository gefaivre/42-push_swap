/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gefaivre <gefaivre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/24 21:19:40 by gefaivre          #+#    #+#             */
/*   Updated: 2021/07/28 14:03:58 by gefaivre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H
# define HEADER_H

#include <stdio.h>
#include <stdlib.h>
#include "libft/libft.h"
#define INT_MAX 2147483647
#define INT_MIN -2147483648

typedef struct	s_stack
{
	int *tab;
	int size;
}				t_stack;

typedef struct	s_all
{
	t_stack	stack_a;
	t_stack	stack_b;
	int		size;
	char	*line;
	int		count;
	int		div;
	int		init_med;
	int		a_med_val;
	int		b_med_val;
	int		max;
	int		min;
	int		max_b;
}				t_all;

int		is_sort(int *tab, int len);
void	ft_quit(t_all *s, char *str);
void	set_all(t_all *s);
void	check(t_all *s, char **av);
void	all_params_is_int(t_all *s, char **av);
void	ft_set(t_all *s, int ac, char **av);
int		malloc_stacks(t_all *s, int ac);
void	fill_stack(int *tab, int ac,char **av);
void	print_stack(t_all *s);
void	ckeck_duplicates(t_all *s, int *tab, int size);
void	line_value(t_all *s);
int		find_min_pos(int *tab, int size);
void	print_chunk_stack(t_all *s);
void	push_chunk_to_b(t_all *s);

void	big_sort(t_all *s);

void	pa(t_all *s);
void	pb(t_all *s);
void	ra(t_all *s);
void	rb(t_all *s);
void	rr(t_all *s);
void	sa(t_all *s);
void	sb(t_all *s);
void	ss(t_all *s);
void	rra(t_all *s);
void	rrb(t_all *s);
void	rrr(t_all *s);


#endif

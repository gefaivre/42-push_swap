/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gefaivre <gefaivre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/24 21:19:40 by gefaivre          #+#    #+#             */
/*   Updated: 2021/06/25 14:20:15 by gefaivre         ###   ########.fr       */
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
}				t_all;

int		is_sort(int *tab, int len);
void	ft_free(t_all *data);
void	set_all(t_all *s);
void	check(t_all *s, char **av);
int		all_params_is_int(char **av);
int		ft_set(t_all *data, int ac, char **av);
int		malloc_stacks(t_all *data, int ac);
void	fill_stack(int *tab, int ac,char **av);
void	print_stack(t_all *data);
int		ckeck_duplicates(int *tab, int size);

void	pa(t_all *data);
void	pb(t_all *data);
void	ra(t_all *data);
void	rb(t_all *data);
void	rr(t_all *data);
void	sa(t_all *data);
void	sb(t_all *data);
void	ss(t_all *data);


#endif

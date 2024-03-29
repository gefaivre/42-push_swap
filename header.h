/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gefaivre <gefaivre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/24 21:19:40 by gefaivre          #+#    #+#             */
/*   Updated: 2021/09/07 18:17:38 by gefaivre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H
# define HEADER_H
# include <stdlib.h>
# include <unistd.h>

typedef struct s_stack
{
	int	*tab;
	int	size;
}				t_stack;

typedef struct s_min
{
	char	tab;
	int		val;
}				t_min;

typedef struct s_all
{
	t_stack	stack_a;
	t_stack	stack_b;
	t_min	min;
	t_min	next_min;
	int		size;
	char	*line;
	int		count;
	int		max;
	int		verbose;
	int		min_a;
	int		min_b;
	int		i;
}				t_all;

int		is_sort(int *tab, int len);
void	ft_quit(t_all *s, char *str, char *verbose);
void	set_all(t_all *s);
void	all_params_is_int(t_all *s, char **av, int ac);
void	ft_set(t_all *s, int ac, char **av);
int		malloc_stacks(t_all *s, int ac);
void	fill_stack(int *tab, int ac, char **av);
void	ckeck_duplicates(t_all *s, int *tab, int size);
int		find_min(int *tab, int size);
int		find_max(int *tab, int size);
int		num_pos(int *tab, int size, int num);
void	ft_max(t_all *s);

void	mini_sort(t_all *s);
void	medium_sort(t_all *s);
void	big_sort(t_all *s);

void	opti_pb(t_all *s, int num, int med_size);
void	push_all_med_to_b(t_all *s);
int		num_pos(int *tab, int size, int num);
int		first_in_med(int *tab, int size, int med_size, int swap);
void	push_all_med_to_a(t_all *s);
int		is_min(int nb, int *tab, int size, int old_min);
void	opti_pa(t_all *s, int num, int med_size);
int		num_pos(int *tab, int size, int num);
int		find_min(int *tab, int size);
void	set_first_min(t_all *s);

int		ft_isdigit(int c);
void	ft_putstr_fd(char *s, int fd);
size_t	ft_strlen(const char *str);
int		ft_strncmp(const char *s1, const char *s2, size_t n);

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

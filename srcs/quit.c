/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   quit.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gefaivre <gefaivre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/24 22:35:04 by gefaivre          #+#    #+#             */
/*   Updated: 2021/07/26 09:07:25 by gefaivre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header.h"

void	ft_quit(t_all *s, char *str)
{
	ft_putstr_fd(str, 1);
	if (s->stack_a.tab)
		free(s->stack_a.tab);
	if (s->stack_b.tab)
		free(s->stack_b.tab);
}


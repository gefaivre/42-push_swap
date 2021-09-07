/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   quit.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gefaivre <gefaivre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/24 22:35:04 by gefaivre          #+#    #+#             */
/*   Updated: 2021/09/07 15:25:50 by gefaivre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header.h"




void	ft_quit(t_all *s, char *str, char *verbose)
{
	if (s->verbose == 1)
	{
		ft_putstr_fd(verbose, 1);
		printf("s->count\t=\t[%d]\n", s->count);
	}
	ft_putstr_fd(str, 1);



	/* if (s->stack_a.tab) */
		/* free(s->stack_a.tab); */
	/* if (s->stack_b.tab != 0) */
		/* free(s->stack_b.tab);
 */


	if (s->verbose == 1)
	{
		printf("JE SUIS BIEN DANS LE FT_QUIT\n");
	}
	exit(0);
}


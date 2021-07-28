/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   all_params_is_int.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gefaivre <gefaivre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/25 04:45:18 by gefaivre          #+#    #+#             */
/*   Updated: 2021/07/26 09:09:36 by gefaivre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header.h"

long long	ft_atol(const char *str)
{
	int		i;
	int		neg;
	long long	res;

	if (!str)
		return (0);
	i = 0;
	neg = 1;
	if (str[i] == '-')
		neg = -1;
	if (neg == -1 || str[i] == '+')
		i++;
	res = 0;
	while (str[i] >= '0' && str[i] <= '9')
		res = (res * 10) + (str[i++] - '0');
	return (res * neg);
}

int	only_digit(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (!ft_isdigit(str[i]) && str[i] != '-')
		{
			return (-1);
		}
		i++;
	}
	return (0);
}

int is_int(char *str)
{
	long long res;
	if (ft_strlen(str) > 11)
		return (-1);
	if (only_digit(str) == -1)
	{
		return (-1);
	}

	res = ft_atol(str);
	if (res > INT_MAX || res < INT_MIN)
		return (-1);
	return (0);
}

void	all_params_is_int(t_all *s, char **av)
{
	int i;

	i = 1;
	while (av[i])
	{
		if (is_int(av[i]) == -1)
			ft_quit(s, "");
	i++;
	}
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apercebo <apercebo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 17:28:44 by apercebo          #+#    #+#             */
/*   Updated: 2021/11/19 19:39:31 by apercebo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ftreturn(int neg)
{
	if (neg >= 0)
		return (-1);
	else
		return (0);
}

int	ft_atoi(const char *str)
{
	int			nbr;
	int			neg;
	long int	result;

	nbr = 0;
	neg = 1;
	result = 0;
	while ((str[nbr] >= 9 && str[nbr] <= 13) || str[nbr] == 32)
		nbr++;
	if (str[nbr] == '+' || str[nbr] == '-')
	{
		if (str[nbr] == '-')
			neg *= -1;
		nbr++;
	}
	while (str[nbr] >= 48 && str[nbr] <= 57)
	{
		if (result * 10 + (str[nbr] - 48) < result)
			return (ftreturn(neg));
		result = result * 10 + (str[nbr] - 48);
		nbr++;
	}
	return ((result * neg));
}

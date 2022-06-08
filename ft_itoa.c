/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apercebo <apercebo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 13:53:13 by apercebo          #+#    #+#             */
/*   Updated: 2021/11/19 15:20:38 by apercebo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	nbrsize(long int n)
{
	int	nbr;
	int	nbrch;

	nbr = n;
	nbrch = 0;
	while (nbr != 0)
	{
		nbrch++;
		nbr /= 10;
	}
	if (n < 0)
		nbrch++;
	if (n == 0)
		nbrch++;
	return (nbrch);
}

char	*ft_itoa(int n)
{
	char		*str;
	int			nbrch;
	long int	nbr;

	nbr = (long int)n;
	nbrch = nbrsize(nbr);
	str = malloc((nbrch + 1) * sizeof(char));
	if (!str)
		return (0);
	if (nbr == 0)
		str[0] = '0';
	if (nbr < 0)
	{
		str[0] = '-';
		nbr = nbr * -1;
	}
	str[nbrch] = '\0';
	while (nbr != 0)
	{
		str[nbrch - 1] = (nbr % 10) + 48;
		nbrch--;
		nbr /= 10;
	}
	return (str);
}

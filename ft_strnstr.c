/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apercebo <apercebo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 20:00:56 by apercebo          #+#    #+#             */
/*   Updated: 2021/11/19 15:22:36 by apercebo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *litt, size_t len)
{
	size_t	nbr;
	size_t	longu;
	size_t	nbrlit;

	nbr = 0;
	longu = 0;
	if (litt[0] == '\0')
		return ((char *)big);
	while (litt[longu])
		longu++;
	while (big[nbr] && (nbr + longu <= len))
	{
		nbrlit = 0;
		while (litt[nbrlit] == big[nbr + nbrlit])
		{
			if ((nbrlit) == longu - 1)
				return (&((char *)big)[nbr]);
			nbrlit++;
		}
		nbr++;
	}
	return (NULL);
}

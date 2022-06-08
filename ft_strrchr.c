/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apercebo <apercebo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 17:28:12 by apercebo          #+#    #+#             */
/*   Updated: 2021/11/19 15:22:40 by apercebo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *string, int searchedChar)
{
	int	nbr;

	nbr = 0;
	while (string[nbr])
		nbr++;
	if ((char)searchedChar == '\0')
		return (&((char *)string)[nbr]);
	nbr--;
	while (nbr > -1)
	{
		if (string[nbr] == (char)searchedChar)
			return (&((char *)string)[nbr]);
		nbr--;
	}
	return (NULL);
}

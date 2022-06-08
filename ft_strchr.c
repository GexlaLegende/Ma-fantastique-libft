/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apercebo <apercebo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 17:28:22 by apercebo          #+#    #+#             */
/*   Updated: 2021/11/19 15:21:50 by apercebo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *string, int searchedChar)
{
	int	nbr;

	nbr = 0;
	while (string[nbr])
	{
		if (string[nbr] == (char)searchedChar)
			return (&((char *)string)[nbr]);
		nbr++;
	}
	if ((char)searchedChar == '\0')
		return (&((char *)string)[nbr]);
	return (NULL);
}

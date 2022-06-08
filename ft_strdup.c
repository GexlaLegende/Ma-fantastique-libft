/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apercebo <apercebo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 21:34:18 by apercebo          #+#    #+#             */
/*   Updated: 2021/11/19 15:22:04 by apercebo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *source)
{
	int		len;
	char	*newstr;
	int		nbr;

	len = 0;
	nbr = 0;
	while (source[len])
		len++;
	newstr = malloc((len + 1) * sizeof(char));
	if (newstr == NULL)
		return (NULL);
	while (source[nbr])
	{
		newstr[nbr] = source[nbr];
		nbr++;
	}
	newstr[nbr] = '\0';
	return (newstr);
}

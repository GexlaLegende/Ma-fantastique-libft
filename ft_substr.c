/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apercebo <apercebo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 14:42:34 by apercebo          #+#    #+#             */
/*   Updated: 2021/11/19 15:22:47 by apercebo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t		nbr;
	size_t		lon;
	char		*str;

	nbr = 0;
	lon = 0;
	if (!s)
		return (NULL);
	lon = ft_strlen(s);
	if (len > lon)
		len = lon;
	if (!s || start > lon)
	{
		str = ft_calloc(1, sizeof(char));
		return (str);
	}
	str = ft_calloc(len + 1, sizeof(char));
	if (str == NULL)
		return (NULL);
	while (nbr < len && s[nbr])
	{
		str[nbr] = s[nbr + start];
		nbr++;
	}
	return (str);
}

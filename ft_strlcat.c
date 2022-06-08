/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apercebo <apercebo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 19:26:34 by apercebo          #+#    #+#             */
/*   Updated: 2021/11/19 16:28:49 by apercebo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t		nbr;
	size_t		nbrsource;
	size_t		lensrc;
	size_t		lendst;

	nbrsource = 0;
	lensrc = ft_strlen(src);
	lendst = 0;
	while (lendst < size && dst[lendst])
		lendst++;
	if (size < lendst || size == 0)
		return (lensrc + size);
	nbr = lendst;
	while (nbr < size - 1 && src[nbrsource])
	{
		dst[nbr] = src[nbrsource];
		nbr++;
		nbrsource++;
	}
	if (nbr < size)
		dst[nbr] = '\0';
	return (lendst + lensrc);
}

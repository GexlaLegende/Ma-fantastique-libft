/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apercebo <apercebo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 19:36:16 by apercebo          #+#    #+#             */
/*   Updated: 2021/11/19 15:22:19 by apercebo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	int		len;
	size_t	nbr;

	len = 0;
	nbr = 0;
	while (src[len])
		len++;
	if (size == 0)
		return (len);
	while (src[nbr] && nbr < size - 1)
	{
		dst[nbr] = src[nbr];
		nbr++;
	}
	dst[nbr] = '\0';
	return (len);
}

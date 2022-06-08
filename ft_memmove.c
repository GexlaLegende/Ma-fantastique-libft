/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apercebo <apercebo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 19:09:18 by apercebo          #+#    #+#             */
/*   Updated: 2021/11/19 15:21:15 by apercebo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t size)
{
	size_t	nbr;

	if (src > dest)
		ft_memcpy(dest, src, size);
	if (dest > src)
	{
		nbr = size;
		while (nbr > 0)
		{
			nbr--;
			((unsigned char *)dest)[nbr] = ((unsigned char *)src)[nbr];
		}
	}
	return (dest);
}

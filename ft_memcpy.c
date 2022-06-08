/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apercebo <apercebo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 18:19:08 by apercebo          #+#    #+#             */
/*   Updated: 2021/11/19 15:21:08 by apercebo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t size)
{
	size_t	nbr;

	if (dest == src)
		return (dest);
	nbr = 0;
	while ((nbr < size))
	{
		((unsigned char *)dest)[nbr] = ((unsigned char *)src)[nbr];
		nbr++;
	}
	return (dest);
}

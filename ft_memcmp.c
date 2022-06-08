/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apercebo <apercebo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 21:11:08 by apercebo          #+#    #+#             */
/*   Updated: 2021/11/19 15:20:55 by apercebo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *ptr1, const void *ptr2, size_t size)
{
	size_t	nbr;

	nbr = 0;
	if (size == 0)
		return (0);
	while ((nbr < size - 1) && (((char *)ptr1)[nbr] == ((char *)ptr2)[nbr]))
		nbr++;
	return (((unsigned char *)ptr1)[nbr] - ((unsigned char *)ptr2)[nbr]);
}

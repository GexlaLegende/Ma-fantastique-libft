/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apercebo <apercebo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 18:05:26 by apercebo          #+#    #+#             */
/*   Updated: 2021/11/19 15:21:26 by apercebo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *pointer, int value, size_t count)
{
	size_t	nbr;

	nbr = 0;
	while (nbr < count)
	{
		((unsigned char *)pointer)[nbr] = value;
		nbr++;
	}
	return (pointer);
}

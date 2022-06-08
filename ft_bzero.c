/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apercebo <apercebo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 18:13:46 by apercebo          #+#    #+#             */
/*   Updated: 2021/11/19 15:20:33 by apercebo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_bzero(void *pointer, size_t count)
{
	size_t	nbr;

	nbr = 0;
	while (nbr < count)
	{
		((unsigned char *)pointer)[nbr] = '\0';
		nbr++;
	}
	return (pointer);
}

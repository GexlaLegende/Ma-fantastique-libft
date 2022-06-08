/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apercebo <apercebo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 21:46:06 by apercebo          #+#    #+#             */
/*   Updated: 2021/11/19 15:20:33 by apercebo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t elementCount, size_t elementSize)
{
	void		*ptr;
	size_t		nbr;

	nbr = 0;
	ptr = malloc(elementCount * elementSize);
	if (ptr == NULL)
		return (NULL);
	if (elementSize == 0)
		return (ptr);
	while (nbr < elementCount * elementSize)
	{
		((char *)ptr)[nbr] = '\0';
		nbr++;
	}
	return (ptr);
}

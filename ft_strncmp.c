/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apercebo <apercebo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 17:28:15 by apercebo          #+#    #+#             */
/*   Updated: 2021/11/19 15:22:32 by apercebo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *first, const char *second, size_t len)
{
	size_t	n;

	n = 0;
	if (len == 0)
		return (0);
	while (first[n] && second[n] && n < len - 1 && first[n] == second[n])
		n++;
	return (((unsigned char *)first)[n] - ((unsigned char *)second)[n]);
}

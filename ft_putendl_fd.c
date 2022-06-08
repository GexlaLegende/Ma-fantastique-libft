/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apercebo <apercebo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 19:18:07 by apercebo          #+#    #+#             */
/*   Updated: 2021/11/19 15:23:48 by apercebo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	int	nbr;

	nbr = 0;
	if (s)
	{
		while (s[nbr])
		{
			write(fd, &s[nbr], 1);
			nbr++;
		}
		write(fd, "\n", 1);
	}
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apercebo <apercebo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 13:49:50 by apercebo          #+#    #+#             */
/*   Updated: 2021/11/19 15:22:10 by apercebo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		len;
	int		nbr;
	char	*str;

	if (!s1 || !s2)
		return (NULL);
	nbr = ft_strlen(s2);
	len = ft_strlen(s1);
	str = malloc((len + nbr + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);
	nbr = 0;
	while (s1[nbr])
	{
		str[nbr] = s1[nbr];
		nbr++;
	}
	nbr = 0;
	while (s2[nbr])
	{
		str[nbr + len] = s2[nbr];
		nbr++;
	}
	str[nbr + len] = '\0';
	return (str);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apercebo <apercebo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 21:40:29 by apercebo          #+#    #+#             */
/*   Updated: 2021/11/19 19:46:40 by apercebo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	isachar(char c, char const *set)
{
	int	nbr;

	nbr = 0;
	while (set[nbr])
	{
		if (set[nbr] == c)
			return (1);
		nbr++;
	}
	return (0);
}

static size_t	ft_lenstr(char const *s1, char const *set)
{
	int	nbr;
	int	end;
	int	nbrset;

	nbr = 0;
	nbrset = 0;
	end = 0;
	while (s1[nbr] && (isachar(s1[nbr], set) == 1))
		nbr++;
	while (s1[end])
		end++;
	end--;
	while (end > 0 && (isachar(s1[end], set) == 1))
		end--;
	if ((end - nbr) < 0)
		return (0);
	return ((end - nbr));
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*newstr;
	int		nbr;
	int		nbrnew;
	int		end;

	nbr = 0;
	nbrnew = 0;
	if (!s1)
		return (NULL);
	newstr = malloc(sizeof(char) * (ft_lenstr(s1, set) + 2));
	if (!newstr)
		return (NULL);
	while ((isachar(s1[nbr], set) == 1) && s1[nbr])
		nbr++;
	end = ft_strlen(s1) - 1;
	while ((isachar(s1[end], set) == 1) && end > 0)
		end--;
	while (nbr <= end)
	{
		newstr[nbrnew] = s1[nbr];
		nbrnew++;
		nbr++;
	}
	newstr[nbrnew] = '\0';
	return (newstr);
}

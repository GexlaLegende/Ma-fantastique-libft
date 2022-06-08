/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apercebo <apercebo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 20:38:04 by apercebo          #+#    #+#             */
/*   Updated: 2021/11/19 19:48:08 by apercebo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	freeall(char **str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		free(str[i]);
		i++;
	}
	free(str);
}

static int	ft_nbword(char const *s, char c)
{
	int	nbword;
	int	nbr;

	nbword = 0;
	nbr = 0;
	if (s[0] != c && s[0] != '\0')
		nbword++;
	while (s[nbr])
	{
		if (s[nbr] == c && s[nbr + 1] != c
			&& s[nbr + 1] != '\0')
			nbword++;
		nbr++;
	}
	return (nbword);
}

static char	*ft_strdupmod(const char *source, int start, int len, char **str)
{
	int		nbr;
	char	*newstr;

	nbr = 0;
	newstr = ft_calloc((len + 1), sizeof(char));
	if (!newstr)
	{
		freeall(str);
		return (NULL);
	}
	while (source[nbr + start] && nbr < len)
	{
		newstr[nbr] = source[nbr + start];
		nbr++;
	}
	return (newstr);
}

char	**ft_split(char const *s, char c)
{
	int		nbr;
	int		nbword;
	char	**str;
	int		nbrlen;
	int		indexstr;

	if (!s)
		return (NULL);
	nbword = ft_nbword(s, c);
	nbr = 0;
	indexstr = 0;
	str = ft_calloc((nbword + 1), sizeof(char *));
	if (!str)
		return (NULL);
	while (s[nbr] && indexstr < nbword)
	{
		while (s[nbr] && s[nbr] == c)
			nbr++;
		nbrlen = nbr;
		while (s[nbr] && s[nbr] != c)
			nbr++;
		str[indexstr] = ft_strdupmod(s, nbrlen, nbr - nbrlen, str);
		indexstr++;
	}
	return (str);
}

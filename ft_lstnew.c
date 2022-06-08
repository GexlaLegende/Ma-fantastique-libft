/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apercebo <apercebo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 13:07:03 by apercebo          #+#    #+#             */
/*   Updated: 2021/11/19 20:16:06 by apercebo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*newelm;

	newelm = (t_list *)malloc(sizeof(t_list));
	if (!newelm)
		return (0);
	newelm->content = content;
	newelm->next = NULL;
	return (newelm);
}

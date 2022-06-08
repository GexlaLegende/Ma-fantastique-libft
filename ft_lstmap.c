/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apercebo <apercebo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 17:43:33 by apercebo          #+#    #+#             */
/*   Updated: 2021/11/19 20:01:43 by apercebo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*begin;
	t_list	*newlst;
	t_list	*new;

	begin = lst;
	if (!lst)
		return (0);
	newlst = ft_lstnew(f(begin->content));
	begin = begin->next;
	while (begin)
	{
		new = ft_lstnew(f(begin->content));
		if (!new)
		{
			ft_lstclear(&newlst, del);
			return (NULL);
		}
		ft_lstadd_back(&newlst, new);
		begin = begin->next;
	}
	return (newlst);
}

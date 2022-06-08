/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apercebo <apercebo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 16:28:53 by apercebo          #+#    #+#             */
/*   Updated: 2021/11/19 20:08:33 by apercebo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*nexto;

	if (!lst)
		return ;
	while (*lst != NULL)
	{
		nexto = (*lst)->next;
		ft_lstdelone(*lst, (*del));
		(*lst) = nexto;
	}
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsantama <fsantama@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 12:40:24 by fsantama          #+#    #+#             */
/*   Updated: 2023/01/09 15:38:17 by fsantama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*lst2;
	t_list	*aux;

	lst2 = 0;
	while (lst)
	{
		aux = ft_lstnew(f(lst->content));
		if (!lst)
		{
			ft_lstclear(&lst, del);
			return (0);
		}
		ft_lstadd_back(&lst2, aux);
		lst = lst->next;
	}
	return (lst2);
}

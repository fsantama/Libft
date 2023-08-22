/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsantama <fsantama@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 12:37:44 by fsantama          #+#    #+#             */
/*   Updated: 2023/08/22 16:29:25 by fsantama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Add a new element to the front of a linked list.
 *
 * This function adds a new element 'new' to the front of the linked list 
 * 'lst'. The 'next' pointer of the new element is updated to point to the 
 * current head of the list, and the head pointer 'lst' is updated to point to 
 * the new element.
 *
 * @param lst A pointer to a pointer to the head of the linked list.
 * @param new The element to be added to the front of the list.
 */
void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*aux;

	if (*lst)
	{
		while (*lst)
		{
			aux = (*lst)->next;
			ft_lstdelone(*lst, del);
			*lst = aux;
		}
	}
	*lst = 0;
}

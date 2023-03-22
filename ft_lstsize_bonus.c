/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsantama <fsantama@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 12:29:45 by fsantama          #+#    #+#             */
/*   Updated: 2022/12/23 12:42:32 by fsantama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	t_list	*aux;
	int		counter;

	counter = 0;
	if (!lst)
		return (0);
	aux = lst;
	while (aux)
	{
		aux = aux->next;
		counter++;
	}
	return (counter);
}

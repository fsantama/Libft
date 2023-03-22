/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsantama <fsantama@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 10:21:05 by fsantama          #+#    #+#             */
/*   Updated: 2022/12/13 10:53:14 by fsantama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*a;
	char	*b;

	i = 0;
	a = (char *)dest;
	b = (char *)src;
	if (!dest && !src)
		return (0);
	if (a > b)
	{
		while (n -- > 0)
		{
			a[n] = b[n];
		}
	}
	else
	{
		while (i < n)
		{
			a[i] = b[i];
			i++;
		}
	}
	return (dest);
}

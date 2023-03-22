/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsantama <fsantama@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 12:35:00 by fsantama          #+#    #+#             */
/*   Updated: 2022/12/09 13:30:40 by fsantama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*c;
	char	*d;

	i = 0;
	c = (char *)dest;
	d = (char *)src;
	if (!dest && !src)
		return (0);
	while (i < n)
	{
		c[i] = d[i];
			i++;
	}
	return (dest);
}

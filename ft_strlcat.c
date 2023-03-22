/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsantama <fsantama@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 11:07:38 by fsantama          #+#    #+#             */
/*   Updated: 2022/12/13 11:36:19 by fsantama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	count_dst;
	size_t	count_src;
	size_t	len_dst;

	count_dst = 0;
	count_src = 0;
	len_dst = ft_strlen(dst);
	if (len_dst < (dstsize - 1) && dstsize > 0)
	{
		while (dst[count_dst] != 0)
			count_dst++;
		while (src[count_src] != 0 && count_dst < (dstsize - 1))
		{
			dst[count_dst] = src[count_src];
			count_dst++;
			count_src++;
		}
		dst[count_dst] = 0;
	}
	if (len_dst > dstsize)
		len_dst = dstsize;
	return (len_dst + ft_strlen(src));
}

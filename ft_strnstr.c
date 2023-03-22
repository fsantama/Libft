/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsantama <fsantama@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 16:52:01 by fsantama          #+#    #+#             */
/*   Updated: 2022/12/13 18:04:39 by fsantama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i_l;
	size_t	i_b;

	i_l = 0;
	i_b = 0;
	if (little[0] == 0)
		return ((char *) big);
	while (big[i_b])
	{
		i_l = 0;
		while (big[i_b + i_l] == little[i_l] && (i_b + i_l) < len)
		{
			if (big[i_b + i_l] == 0 && little[i_l] == 0)
				return ((char *) &big[i_b]);
			i_l++;
		}
		if (!little[i_l])
			return ((char *) &big[i_b]);
		i_b++;
	}
	return (0);
}

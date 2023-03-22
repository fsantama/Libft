/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsantama <fsantama@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 11:13:26 by fsantama          #+#    #+#             */
/*   Updated: 2022/12/14 11:45:38 by fsantama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str)
{
	char	*dst;
	int		i;

	i = 0;
	dst = malloc((ft_strlen(str) + 1) * sizeof(char));
	if (dst)
	{
		while (str[i])
		{
			dst[i] = str[i];
				i++;
		}
		dst[i] = 0;
	}
	else
		free (dst);
	return (dst);
}

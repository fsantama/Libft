/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsantama <fsantama@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 12:34:53 by fsantama          #+#    #+#             */
/*   Updated: 2022/12/13 12:43:41 by fsantama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	count;

	count = 0;
	while (s[count] != 0)
		count++;
	while (count > 0)
	{
		if (s[count] == (char) c)
			return ((char *) &s[count]);
		count--;
	}
	if ((char) c == s[count])
		return ((char *) &s[count]);
	return (0);
}

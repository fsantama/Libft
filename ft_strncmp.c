/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsantama <fsantama@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 14:42:57 by fsantama          #+#    #+#             */
/*   Updated: 2022/12/13 14:44:40 by fsantama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;
	int		r;

	i = 0;
	r = 0;
	while (r == 0 && (s2[i] || s1[i]) && i < n)
	{
		r = (unsigned char)s1[i] - (unsigned char)s2[i];
		i++;
	}
	return (r);
}

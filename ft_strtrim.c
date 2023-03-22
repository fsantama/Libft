/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsantama <fsantama@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 13:36:02 by fsantama          #+#    #+#             */
/*   Updated: 2022/12/15 13:42:41 by fsantama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	count;
	size_t	len;

	count = 0;
	len = ft_strlen(s1);
	if (!s1 || !set)
		return (0);
	if (s1[count] == 0 || len == 0)
		return (ft_strdup(""));
	while (ft_strchr(set, s1[count]))
		count++;
	while (ft_strchr(set, s1[len]))
		len--;
	return (ft_substr(s1, count, len - count + 1));
}

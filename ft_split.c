/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsantama <fsantama@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 12:21:08 by fsantama          #+#    #+#             */
/*   Updated: 2023/01/10 13:02:32 by fsantama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_wordcounter( char const *s, char c)
{
	int	i;
	int	counter;

	i = 0;
	counter = 0;
	while (s[i] != 0)
	{
		if (s[i] != c)
		{
			while (s[i] != 0 && s[i] != c)
				i++;
			counter++;
		}
		else
			i++;
	}
	return (counter);
}

static size_t	ft_len( char const *s, char c)
{
	size_t	len;

	len = 0;
	while (*s != 0 && *s != c)
	{
		len++;
		s++;
	}
	return (len);
}

static void	ft_free(char **str)
{
	size_t	i;

	i = 0;
	while (str[i])
	{
		free(str[i]);
		i++;
	}
	free (str);
}

static char	**ft_make_cells(char **str, char *s, char c)
{
	size_t	len;
	size_t	i;

	i = 0;
	while (*s != 0)
	{
		if (*s != c)
		{
			len = ft_len(s, c);
			s = s + len;
			str[i] = ft_substr(s - len, 0, len);
			if (str[i] == 0)
			{
				ft_free(str);
				return (0);
			}
			i++;
		}
		else
			s++;
	}
	str[i] = 0;
	return (str);
}

char	**ft_split(char const *s, char c)
{
	char	**str;

	str = malloc(sizeof(char *) * (ft_wordcounter(s, c) + 1));
	if (!str || !s)
		return (0);
	return (ft_make_cells(str, (char *)s, c));
}

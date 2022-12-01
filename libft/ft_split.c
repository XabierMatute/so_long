/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xmatute- <xmatute-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 15:32:05 by xmatute-          #+#    #+#             */
/*   Updated: 2022/09/22 19:20:22 by xmatute-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static unsigned int	palabras(char const *s, char c)
{
	unsigned int	p;

	p = 0;
	while (*(s++))
		if ((*s == 0 || *s == c) && *(s - 1) != c)
			p++;
	return (p);
}

static size_t	ft_wlen(const char *s, char c)
{
	int	l;

	l = 0;
	while (s[l] && s[l] != c)
		l++;
	return (l);
}

static char	**liberate(char ***f, unsigned int p)
{
	unsigned int	i;
	char			**sl;

	i = 0;
	sl = *f;
	while (i < p && sl[i])
	{
		free(sl[i]);
		i++;
	}
	free(sl);
	return (NULL);
}

// static char	**falla(char **sl, unsigned int p)
// {
// 	unsigned int	i;

// 	i = 0;
// 	while (i < p)
// 	{
// 		if (!sl[i])
// 		{
// 			liberate(&sl, p);
// 			return (NULL);
// 		}
// 		i++;
// 	}
// 	return (sl);
// }

char	**ft_split(char const *s, char c)
{
	char			**sl;
	unsigned int	i;
	unsigned int	p;

	sl = malloc(sizeof(char *) * (palabras(s, c) + 1));
	if (!sl)
		return (0);
	i = 0;
	p = 0;
	while (s[i] == c && s[i])
		i++;
	while (s[i])
	{
		sl[p] = ft_substr(s, i, ft_wlen(s + i, c));
		if (!sl[p])
			return (liberate(&sl, p));
		p++;
		i = i + ft_wlen(s + i, c);
		while (s[i] == c && s[i])
			i++;
	}
	sl[p] = 0;
	return (sl);
}

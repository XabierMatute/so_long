/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   getmap.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xmatute- <xmatute-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 17:35:04 by xmatute-          #+#    #+#             */
/*   Updated: 2022/12/09 18:29:45 by xmatute-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"
#include <fcntl.h>

size_t	mapsize(int fd)
{
	char	c;
	ssize_t	r;
	size_t	i;

	i = 0;
	c = 0;
	r = read(fd, &c, 1);
	while (r == 1 && c)
	{
		r = read(fd, &c, 1);
		i++;
	}
	close(fd);
	return (i);
}

char	*ensuren(char **m)
{
	char	*n;
	char	*a;

	if (m[0][ft_strlen(*m) - 1] == '\n')
		return (*m);
	n = ft_strdup("\n");
	a = *m;
	if (!n || !a)
		exit(-5);
	*m = ft_strjoin(a, n);
	freep(a);
	freep(n);
	return (*m);
}

char	*getmap(int fd, size_t	size)
{
	char	c;
	ssize_t	r;
	char	*map;
	size_t	i;

	map = ft_calloc(sizeof(char), size + 1);
	if (!map)
		exit(-2);
	i = 0;
	r = read(fd, &c, 1);
	while (r == 1 && c)
	{
		map[i] = c;
		r = read(fd, &c, 1);
		i++;
	}
	close(fd);
	map[i] = 0;
	map = ensuren(&map);
	return (map);
}

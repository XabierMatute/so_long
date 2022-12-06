/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   getmap.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xmatute- <xmatute-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 17:35:04 by xmatute-          #+#    #+#             */
/*   Updated: 2022/12/06 21:19:40 by xmatute-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"
#include <fcntl.h>
#include <unistd.h>

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
	return(i);
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
	return(map);
}

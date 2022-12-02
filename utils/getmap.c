/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   getmap.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xmatute- <xmatute-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 17:35:04 by xmatute-          #+#    #+#             */
/*   Updated: 2022/12/02 18:53:16 by xmatute-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"
#include <fcntl.h>
#include <unistd.h>

char	*getmap(int fd)
{
	char	*c;
	ssize_t	r;
	char	*map;
	size_t	i;

	map = ft_calloc(sizeof(char), mapsize(fd));
	i = 0;
	r = read(fd, c, 1);
	while (r == 1 && *c)
	{
		map[i] = *c;
		r = read(fd, c, 1);
		i++;
	}
	map[i] = 0;
	return(map);
}
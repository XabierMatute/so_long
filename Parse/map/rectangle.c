/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rectangle.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xmatute- <xmatute-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 15:19:52 by xmatute-          #+#    #+#             */
/*   Updated: 2022/12/06 12:09:25 by xmatute-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../so_long.h"

void	error_rectangle(char	*map);

int	rectangle(char *map)
{
	int	width;

	width = linelen(map);
	map += width + 1;
	while (*map)
	{
		if	(linelen(map) != width)
			return (0);
		map += width + 1;
	}
	return (1);
}

void	checkrectangle(char *map)
{
	if (!rectangle(map))
		error_rectangle(map);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   closed.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xmatute- <xmatute-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 16:56:09 by xmatute-          #+#    #+#             */
/*   Updated: 2022/12/04 17:14:42 by xmatute-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../so_long.h"

void	error_closed(char	*map);

int	closeud(char *map)
{
	unsigned int	width;
	unsigned int	i;

	i = 0;
	width = linelen(map);
	while (i < width)
	{
		if (map[i] != '1')
			return (0);
		i++;
	}
	while (linelen(map + i) && map[i + 1])
		i++;
	while (linelen(map + i) < width)
	{
		if (map[i] != '1')
			return (0);
		i--;
	}
	return (1);
}

void	checkclosed(char *map)
{
	if (!closeud(map) || !closelr(map))
		error_closed(map);
}
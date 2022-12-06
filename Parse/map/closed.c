/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   closed.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xmatute- <xmatute-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 16:56:09 by xmatute-          #+#    #+#             */
/*   Updated: 2022/12/06 13:25:38 by xmatute-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../so_long.h"

void	error_closed(char	*map);

static	int	cu(char	*m)
{
	int	i;

	i = 0;
	while (p(m, i, 0))
	{
		if (p(m, i, 0) != '1')
			return (0);
		i++;
	}
	return (1);
}

static	int	cd(char	*m)
{
	int	i;
	int	h;

	i = 0;
	h = columlen(m);
	while (p(m, i, h))
	{
		if (p(m, i, h) != '1')
			return (0);
		i++;
	}
	return (1);
}

static	int	cl(char	*m)
{
	int	i;

	i = 0;
	while (p(m, 0, i))
	{
		if (p(m, 0, i) != '1')
			return (0);
		i++;
	}
	return (1);
}

static	int	cr(char	*m)
{
	int	i;
	int w;

	i = 0;
	w = w = linelen(s);
	while (p(m, w, i))
	{
		if (p(m, w, i) != '1')
			return (0);
		i++;
	}
	return (1);
}

void	checkclosed(char *map)
{
	if (!cu(map) || !cd(map) || !cl(map) || !cr(map))
		error_closed(map);
}
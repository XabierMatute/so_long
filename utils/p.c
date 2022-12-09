/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   p.c                                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xmatute- <xmatute-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 11:30:13 by xmatute-          #+#    #+#             */
/*   Updated: 2022/12/09 12:42:09 by xmatute-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

char	p(char *m, int x, int y)
{
	int	w;

	if (x < 0 || y < 0)
		return (0);
	w = linelen(m);
	while (y)
	{
		m += w +1;
		y--;
		if (*m == 0 || *m == '\n')
			return (0);
	}
	while (x)
	{
		m += 1;
		x--;
		if (*m == 0 || *m == '\n')
			return (0);
	}
	return (*m);
}

char	*pp(char *m, int x, int y)
{
	int	w;

	if (x < 0 || y < 0)
		return (0);
	w = linelen(m);
	while (y)
	{
		m += w +1;
		y--;
		if (*m == 0 || *m == '\n')
			return (0);
	}
	while (x)
	{
		m += 1;
		x--;
		if (*m == 0 || *m == '\n')
			return (0);
	}
	return (m);
}

int	x(char *m, char c)
{
	int	x;
	int	j;

	x = 0;
	j = 0;
	while (p(m, x, j))
	{
		while (p(m, x, j))
		{
			if (p(m, x, j) == c)
			{
				return (x);
			}
			x++;
		}
		x = 0;
		j++;
	}
	return (-1);
}

int	y(char *m, char c)
{
	int	y;
	int	i;

	i = 0;
	y = 0;
	while (p(m, i, y))
	{
		while (p(m, i, y))
		{
			if (p(m, i, y) == c)
			{
				return (y);
			}
			i++;
		}
		i = 0;
		y++;
	}
	return (-1);
}

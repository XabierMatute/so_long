/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   p.c                                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xmatute- <xmatute-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 11:30:13 by xmatute-          #+#    #+#             */
/*   Updated: 2022/12/06 12:41:53 by xmatute-         ###   ########.fr       */
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
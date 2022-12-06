/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   path.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xmatute- <xmatute-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 18:32:19 by xmatute-          #+#    #+#             */
/*   Updated: 2022/12/06 21:34:59 by xmatute-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../so_long.h"
#include <strings.h>
char	*ft_strdup( const char *str1);
unsigned int	charnum(char *map, char c);
void	error_path(char	**map);

void	paint(char *m, int x, int y)
{
	if (p(m, x, y) == '0' || p(m, x, y) == 'C' || p(m, x, y) == 'P')
	{
		*pp(m, x, y) = 'X';
		// ft_printf("pintamos\n%s\n", m);
		paint(m, x + 1, y);
		paint(m, x, y + 1);
		paint(m, x - 1, y);
		paint(m, x, y - 1);
	}
	if (p(m, x, y) == 'E')
		*pp(m, x, y) = '*';
}

int	checkpainted(char *map)
{
	if (charnum(map, 'E') > 0)
		return (0);
	if (charnum(map, 'C') > 0)
		return (0);
	return (1);
}

int	validpath(char *m)
{
	int	b;

	paint(m, x(m, 'P'), y(m, 'P'));
	b = checkpainted(m);
	free(m);
	m = NULL;
	return (b);
}

void	checkpath(char	*m)
{
	if (!validpath(ft_strdup(m)))
		error_path(&m);
		mapend(&m);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   showmap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xmatute- <xmatute-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 14:03:33 by xmatute-          #+#    #+#             */
/*   Updated: 2022/12/09 12:42:24 by xmatute-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

void	puttile(char c, int x, int y, t_mlx *e)
{
	mlx_put_image_to_window(e->mlx, e->w, e->o, x * S, y * S);
	if (c == '1')
		mlx_put_image_to_window(e->mlx, e->w, e->l, x * S, y * S);
	if (c == 'C')
		mlx_put_image_to_window(e->mlx, e->w, e->c, x * S, y * S);
	if (c == 'E')
		mlx_put_image_to_window(e->mlx, e->w, e->e, x * S, y * S);
	if (c == 'P')
		mlx_put_image_to_window(e->mlx, e->w, e->p, x * S, y * S);
}

void	showmap(t_mlx *e)
{
	int	i;
	int	j;

	j = 0;
	while (p(e->m, 0, j))
	{
		i = 0;
		while (p(e->m, i, j))
		{
			puttile(p(e->m, i, j), i, j, e);
			i++;
		}
		j++;
	}
}

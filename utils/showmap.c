/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   showmap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xmatute- <xmatute-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 14:03:33 by xmatute-          #+#    #+#             */
/*   Updated: 2022/12/08 14:21:27 by xmatute-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

void	puttile(char c, int x, int y, t_mlx *e)
{
	if (c == 'o')
		mlx_put_image_to_window(e->mlx, e->w, e->o, x * S, y * S);
	if (c == 'l')
		mlx_put_image_to_window(e->mlx, e->w, e->l, x * S, y * S);	
	if (c == 'c')
		mlx_put_image_to_window(e->mlx, e->w, e->c, x * S, y * S);
	if (c == 'e')
		mlx_put_image_to_window(e->mlx, e->w, e->e, x * S, y * S);
	if (c == 'p')
		mlx_put_image_to_window(e->mlx, e->w, e->p, x * S, y * S);
	
}

void	showmap(char *m, t_mlx *e)
{
	int	i;
	int	j;

	j = 0;
	while (p(m, 0, j))
	{
		i = 0;
		while (p(m, i, j))
		{
			puttile(p(m, i, j), i, j, e);
		}
		j++;
	}
}
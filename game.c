/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   game.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xmatute- <xmatute-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 18:06:30 by xmatute-          #+#    #+#             */
/*   Updated: 2022/12/08 14:12:26 by xmatute-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	init(char *m, t_mlx *e)
{
	e->mlx = mlx_init();
	e->w = mlx_new_window(e->mlx, linelen(m) * S, columlen(m) * S, "so_long");
	e->o = mlx_xpm_file_to_image(e->mlx, "o.xpm", &(e->x), &(e->y));
	e->l = mlx_xpm_file_to_image(e->mlx, "l.xpm", &(e->x), &(e->y));
	e->c = mlx_xpm_file_to_image(e->mlx, "c.xpm", &(e->x), &(e->y));
	e->e = mlx_xpm_file_to_image(e->mlx, "e.xpm", &(e->x), &(e->y));
	e->p = mlx_xpm_file_to_image(e->mlx, "o.xpm", &(e->x), &(e->y));
}

void	game(char *m)
{
	t_mlx	e;
	void	*b;
	void	*sm;

	init(m, &e);

	mlx_put_image_to_window(e.mlx, e.w, sm, 0, 0);
	mlx_put_image_to_window(e.mlx, e.w, b, 42, 42);
	mlx_loop(e.mlx);
	mlx_put_image_to_window(e.mlx, e.w, b, 69, 69);
	mlx_loop(e.mlx);
	mapend(&m);
}
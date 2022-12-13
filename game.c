/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   game.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xmatute- <xmatute-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 18:06:30 by xmatute-          #+#    #+#             */
/*   Updated: 2022/12/09 18:17:43 by xmatute-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	protect(void *p, t_mlx *e)
{
	if (!p)
	{
		ft_printf("Error inesperado\n");
		gameover(e);
	}
}

int	x_hook(t_mlx *e)
{
	gameover(e);
	return (0);
}

int	key_hook(int k, t_mlx *e)
{
	if (k == Q || k == ESC)
		gameover(e);
	if (k == D || k == RK)
		mr(e);
	if (k == W || k == UK)
		mu(e);
	if (k == SK || k == DK)
		md(e);
	if (k == A || k == LK)
		ml(e);
	showmap (e);
	return (0);
}

void	init(char *m, t_mlx *e)
{
	e->mlx = 0;
	e->m = 0;
	e->w = 0;
	e->o = 0;
	e->l = 0;
	e->c = 0;
	e->e = 0;
	e->p = 0;
	e->mlx = mlx_init();
	protect(e->mlx, e);
	e->m = m;
	protect(e->m, e);
	e->w = mlx_new_window(e->mlx, linelen(m) * S,
			(columlen(m) + 1) * S, "so_long");
	protect(e->w, e);
	e->o = mlx_xpm_file_to_image(e->mlx, "i/o.xpm", &(e->x), &(e->y));
	protect(e->o, e);
	e->l = mlx_xpm_file_to_image(e->mlx, "i/l.xpm", &(e->x), &(e->y));
	protect(e->l, e);
	e->c = mlx_xpm_file_to_image(e->mlx, "i/c.xpm", &(e->x), &(e->y));
	protect(e->c, e);
	e->e = mlx_xpm_file_to_image(e->mlx, "i/e.xpm", &(e->x), &(e->y));
	protect(e->e, e);
	e->p = mlx_xpm_file_to_image(e->mlx, "i/p.xpm", &(e->x), &(e->y));
	protect(e->p, e);
}

void	game(char *m)
{
	t_mlx	e;

	init(m, &e);
	showmap (&e);
	mlx_key_hook(e.w, key_hook, &e);
	mlx_hook(e.w, 17, 1L << 17, x_hook, &e);
	mlx_loop(e.mlx);
	mapend(&m);
}

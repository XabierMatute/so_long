/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xmatute- <xmatute-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 19:58:03 by xmatute-          #+#    #+#             */
/*   Updated: 2022/12/09 12:41:10 by xmatute-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

void	move(t_mlx *e, int i, int j)
{
	static size_t	mc = 0;

	if (p(e->m, i, j) == '0' || p(e->m, i, j) == 'C')
	{
		*pp(e->m, x(e->m, 'P'), y(e->m, 'P')) = '0';
		*pp(e->m, i, j) = 'P';
		mc++;
		ft_printf("Numero de Movimientos: %u\n", mc);
	}
	if (p(e->m, i, j) == 'E')
		if (charnum(e->m, 'C') == 0)
			gameover(e);
}

void	mr(t_mlx *e)
{
	move(e, x(e->m, 'P') + 1, y(e->m, 'P'));
}

void	ml(t_mlx *e)
{
	move(e, x(e->m, 'P') - 1, y(e->m, 'P'));
}

void	mu(t_mlx *e)
{
	move(e, x(e->m, 'P'), y(e->m, 'P') - 1);
}

void	md(t_mlx *e)
{
	move(e, x(e->m, 'P'), y(e->m, 'P') + 1);
}

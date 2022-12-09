/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gameover.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xmatute- <xmatute-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 11:49:04 by xmatute-          #+#    #+#             */
/*   Updated: 2022/12/09 12:39:11 by xmatute-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

void	freep(void *p)
{
	if (p)
	{
		free(p);
		p = 0;
	}
}

void	gameover(t_mlx *e)
{
	freep(e->mlx);
	freep(e->m);
	freep(e->w);
	freep(e->o);
	freep(e->l);
	freep(e->c);
	freep(e->e);
	freep(e->p);
	exit(0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mapparse.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xmatute- <xmatute-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 22:07:45 by xmatute-          #+#    #+#             */
/*   Updated: 2022/12/07 18:36:41 by xmatute-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	checkinvalidchars(char *map);
void	checkcharnum(char *map);
void	checkrectangle(char *map);
void	checkclosed(char *map);
void	checkpath(char	*m);
void	game(char	*m);

#include "../so_long.h"

void	parsemap(char	*map)
{
	checkinvalidchars(map);
	checkcharnum(map);
	checkrectangle(map);
	checkclosed(map);
	checkpath(map);
	game(map);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mapparse.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xmatute- <xmatute-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 22:07:45 by xmatute-          #+#    #+#             */
/*   Updated: 2022/12/04 14:00:55 by xmatute-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	parsemap(char	*map)
{
	checkinvalidchars(map);
	checkcharnum(map);
	checkrectangle(map);
	checkclosed(map);
	checkpath(map);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_closed.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xmatute- <xmatute-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 13:28:00 by xmatute-          #+#    #+#             */
/*   Updated: 2022/12/09 12:11:54 by xmatute-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int				ft_printf(char const *s, ...);
void			exit(int status);
void			mapend(char **map);

void	error_closed(char	**map)
{
	ft_printf("Error\nEl mapa no esta cerrado\n%s", *map);
	mapend(map);
}

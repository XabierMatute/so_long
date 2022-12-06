/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_rectangle.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xmatute- <xmatute-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 16:18:55 by xmatute-          #+#    #+#             */
/*   Updated: 2022/12/06 18:10:04 by xmatute-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int				ft_printf(char const *s, ...);
void			mapend(char **map);

void	error_rectangle(char	**map)
{
	ft_printf("Error\nEl mapa no es un rectangulo\n%s", *map);
	mapend(map);
}

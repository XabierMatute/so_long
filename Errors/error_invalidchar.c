/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_invalidchar.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xmatute- <xmatute-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 14:17:27 by xmatute-          #+#    #+#             */
/*   Updated: 2022/12/09 12:15:13 by xmatute-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int				ft_printf(char const *s, ...);
void			mapend(char **map);

void	error_invalidchar(char c, char **map)
{
	ft_printf("Error\nEl mapa contiene el caracter invalido '%c'\n", c);
	mapend(map);
}

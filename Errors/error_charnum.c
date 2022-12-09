/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_charnum.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xmatute- <xmatute-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 14:44:00 by xmatute-          #+#    #+#             */
/*   Updated: 2022/12/09 12:10:52 by xmatute-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int				ft_printf(char const *s, ...);
void			mapend(char **map);

void	error_exit(int n, char **map)
{
	ft_printf("Error\nDebe haber una sola salida 'E' en el mapa (hay %i)\n", n);
	mapend(map);
}

void	error_inipos(int n, char **map)
{
	ft_printf("Error\nDebe haber una sola posición inicial 'P' en el mapa");
	ft_printf(" (hay %i)\n", n);
	mapend(map);
}

void	error_collectable(char **map)
{
	ft_printf("Error\nDebe haber al menos un coleccionable 'C' en el mapa\n");
	mapend(map);
}

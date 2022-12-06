/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_path.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xmatute- <xmatute-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 21:28:46 by xmatute-          #+#    #+#             */
/*   Updated: 2022/12/06 21:29:45 by xmatute-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int				ft_printf(char const *s, ...);
void 			exit(int status);
void			mapend(char **map);

void	error_path(char	**map)
{
	ft_printf("Error\nNo hay ninguna ruta valida\n%s", *map);
	mapend(map);
}
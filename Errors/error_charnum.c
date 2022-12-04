/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_charnum.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xmatute- <xmatute-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 14:44:00 by xmatute-          #+#    #+#             */
/*   Updated: 2022/12/04 14:49:28 by xmatute-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int				ft_printf(char const *s, ...);
void 			exit(int status);

void	error_exit(int n)
{
	ft_printf("Error\nDebe haber una sola salida 'E' en el mapa (hay %i)\n", n);
	exit(-1);
}

void	error_inipos(int n)
{
	ft_printf("Error\nDebe haber una sola posición inicial 'P' en el mapa (hay %i)\n", n);
	exit(-1);
}

void	error_collectable(void)
{
	ft_printf("Error\nDebe haber al menos un coleccionable 'C' el mapa\n");
	exit(-1);
}
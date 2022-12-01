/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_argc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xmatute- <xmatute-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 12:15:40 by xmatute-          #+#    #+#             */
/*   Updated: 2022/12/01 13:16:40 by xmatute-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int				ft_printf(char const *s, ...);

int	error_argc(int argc)
{
	ft_printf("Error: has introducido %i argumentos,", argc - 1);
	ft_printf(" introduce por favor un unico argumento (mapname.ber)\n");
	return (-1);
}

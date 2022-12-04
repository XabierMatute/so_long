/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_invalidchar.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xmatute- <xmatute-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 14:17:27 by xmatute-          #+#    #+#             */
/*   Updated: 2022/12/04 15:06:34 by xmatute-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int				ft_printf(char const *s, ...);
void 			exit(int status);

void	error_invalidchar(char c)
{
	ft_printf("Error\nEl mapa contiene el caracter invalido '%c'\n", c);
	exit(-1);
}
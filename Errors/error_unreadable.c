/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_unreadable.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xmatute- <xmatute-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 17:50:23 by xmatute-          #+#    #+#             */
/*   Updated: 2022/12/02 18:09:37 by xmatute-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int				ft_printf(char const *s, ...);
void 			exit(int status);

void	error_unreadable(char	*ber)
{
	ft_printf("Error: el archivo %s no se ha podido leer\n", ber);
	exit(-1);
}
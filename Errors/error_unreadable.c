/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_unreadable.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xmatute- <xmatute-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 17:50:23 by xmatute-          #+#    #+#             */
/*   Updated: 2022/12/02 18:00:27 by xmatute-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	error_unreadable(ber)
{
	ft_printf("Error: el archivo %s no se ha podido leer\n", ber);
	exit(-1);
}
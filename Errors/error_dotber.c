/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_dotber.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xmatute- <xmatute-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 16:22:26 by xmatute-          #+#    #+#             */
/*   Updated: 2022/12/02 16:24:22 by xmatute-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int				ft_printf(char const *s, ...);

int	error_dotber(char *argv)
{
	ft_printf("Error: %s no es un archivo .ber,", argv);
	return (-1);
}

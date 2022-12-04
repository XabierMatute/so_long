/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   invalidchar.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xmatute- <xmatute-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 14:04:16 by xmatute-          #+#    #+#             */
/*   Updated: 2022/12/04 14:16:18 by xmatute-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	validchar(char c)
{
	if (c == '0')
		return (1);
	if (c == '1')
		return (1);
	if (c == 'C')
		return (1);
	if (c == 'E')
		return (1);
	if (c == 'P')
		return (1);
	return (0);
}

void	checkinvalidchars(char *map)
{
	while (*map)
	{
		if (!validchar(*map))
			error_invalidchar(*map);
		map++;
	}
}

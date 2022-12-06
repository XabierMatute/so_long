/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   invalidchar.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xmatute- <xmatute-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 14:04:16 by xmatute-          #+#    #+#             */
/*   Updated: 2022/12/06 18:25:52 by xmatute-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	error_invalidchar(char c, char **map);

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
	if (c == '\n')
		return (1);
	return (0);
}

void	checkinvalidchars(char *map)
{
	int	i;

	i = 0;
	while (map[i])
	{
		if (!validchar(map[i]))
			error_invalidchar(map[i], &map);
		i++;
	}
}

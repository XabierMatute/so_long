/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   charnum.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xmatute- <xmatute-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 14:33:18 by xmatute-          #+#    #+#             */
/*   Updated: 2022/12/04 14:45:02 by xmatute-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


unsigned int	charnum(char *map, char c)
{
	int	n;

	n = 0;
	while (*map)
	{
		if (*map == c)
			n++;
		map++;
	}
	return (n);
}

void	checkcharnum(char *map)
{
	if (charnum(map, 'E') != 1)
		error_exit(charnum(map, 'E'));
	if (charnum(map, 'P') != 1)
		error_inipos(charnum(map, 'P'));
	if (charnum(map, 'C') == 0)
		error_collectable();
}
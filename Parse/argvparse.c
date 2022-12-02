/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   argvparse.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xmatute- <xmatute-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 15:43:35 by xmatute-          #+#    #+#             */
/*   Updated: 2022/12/02 16:35:04 by xmatute-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"
int	error_dotber(char *argv);

int		dotber(char	*argv)
{
	if (argv)
	{
		if (ft_strlen(argv) < 4)
			return (0);
		if (!ft_strncmp(argv + 4 - ft_strlen(argv), ".ber", 4))
			return (1);
	}
	return (0);
}

void	argvparse(char	*argv)
{
	if (!dotber(argv))
		error_dotber(argv);
	//berparse(argv);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   argvparse.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xmatute- <xmatute-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 15:43:35 by xmatute-          #+#    #+#             */
/*   Updated: 2022/12/02 17:11:14 by xmatute-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"
int	error_dotber(char *argv);

// void	berparse(char *ber)
// {
// 	if (!valitber(ber))
// 		error_invalidber(ber);
	
// }


int		dotber(char	*argv)
{
	if (argv)
	{
		if (ft_strlen(argv) < 4)
			return (0);
		if (!ft_strncmp(argv + (ft_strlen(argv) - 4), ".ber", 4))
			return (1);
	}
	return (0);
}

void	argvparse(char	*argv)
{
	if (!dotber(argv))
		error_dotber(argv);
	// berparse(argv);
}
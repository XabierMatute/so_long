/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   argvparse.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xmatute- <xmatute-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 15:43:35 by xmatute-          #+#    #+#             */
/*   Updated: 2022/12/02 17:46:48 by xmatute-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"
#include <fcntl.h>
int	error_dotber(char *argv);

int	readable(char	*ber)
{
	int		fd;
	char	s[42];

	fd = open(ber, O_RDONLY);
	if (read(fd, s, 40) < 1)
		return(0);
	close(fd);
	return (1);
}

void	berparse(char *ber)
{
	if (!readable(ber))
		error_invalidber(ber);
	parsemap(getmap(ber));
}


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
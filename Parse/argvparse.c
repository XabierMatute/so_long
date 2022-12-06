/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   argvparse.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xmatute- <xmatute-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 15:43:35 by xmatute-          #+#    #+#             */
/*   Updated: 2022/12/06 12:07:28 by xmatute-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"
#include <fcntl.h>
int	error_dotber(char *argv);
void	error_unreadable(char *ber);
char	*getmap(int fd, size_t	size);
int	mapsize(int fd);
void	parsemap(char	*map);

int	readable(char	*ber)
{
	int		fd;
	char	s[42];

	fd = open(ber, O_RDONLY);
	if (fd < 3)
	{
		close(fd);
		return(0);
	}
	if (read(fd, s, 40) < 1)
	{
		close(fd);
		return(0);
	}
	close(fd);
	return (1);
}

void	berparse(char *ber)
{
	int		fd1;
	int		fd2;

	if (!readable(ber))
		error_unreadable(ber);
	fd1 = open(ber, O_RDONLY);
	fd2 = open(ber, O_RDONLY);
	parsemap(getmap(fd1, mapsize(fd2)));
	//ft_printf("%s\n", getmap(fd1, mapsize(fd2)));
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
	berparse(argv);
}
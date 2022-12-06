/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xmatute- <xmatute-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 15:37:01 by xmatute-          #+#    #+#             */
/*   Updated: 2022/12/06 13:15:43 by xmatute-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include	<stddef.h>
# include	<stdlib.h>
# include	<unistd.h>
// # include <stdio.h>
// # include <fcntl.h>
// # include <sys/stat.h>
// # include <stdlib.h>
// # include <sys/types.h>
# include "libft/libft.h"


int		mapsize(int fd);
char	*getmap(int fd, size_t	size);
int		linelen(const char *s);
int		columlen(const char *s);
char	p(char *m, int x, int y);

int		ft_printf(char const *s, ...);

#endif
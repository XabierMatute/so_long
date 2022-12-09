/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xmatute- <xmatute-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 15:37:01 by xmatute-          #+#    #+#             */
/*   Updated: 2022/12/09 12:53:26 by xmatute-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

# include	<stddef.h>
# include	<stdlib.h>
# include	<unistd.h>
// # include <stdio.h>
// # include <fcntl.h>
// # include <sys/stat.h>
// # include <stdlib.h>
// # include <sys/types.h>
# include "./libft/libft.h"
# include "mlx/mlx.h"

# define S 42
# define A 0
# define W 13
# define SK 1
# define D 2
# define Q 12
# define ESC 53
# define LK 123
# define RK 124
# define DK 125
# define UK 126

typedef struct s_mlx
{
	void			*mlx;
	char			*m;
	void			*w;
	int				x;
	int				y;
	void			*o;
	void			*l;
	void			*c;
	void			*e;
	void			*p;
}					t_mlx;

int				mapsize(int fd);
char			*getmap(int fd, size_t	size);
void			mapend(char **map);
void			showmap(t_mlx *e);
void			gameover(t_mlx *e);
unsigned int	charnum(char *map, char c);
int				linelen(const char *s);
int				columlen(const char *s);
char			p(char *m, int x, int y);
char			*pp(char *m, int x, int y);
int				x(char *m, char c);
int				y(char *m, char c);

void			mr(t_mlx *e);
void			ml(t_mlx *e);
void			mu(t_mlx *e);
void			md(t_mlx *e);

int				ft_printf(char const *s, ...);

#endif
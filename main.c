/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xmatute- <xmatute-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 11:26:47 by xmatute-          #+#    #+#             */
/*   Updated: 2022/12/06 21:50:15 by xmatute-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int				ft_printf(char const *s, ...);
int	error_argc(int argc);
void	argvparse(char	*argv);

int main(int argc, char *argv[])
{
	if (argc != 2)
		return(error_argc(argc));
	argvparse(argv[1]);
	return 0;
}


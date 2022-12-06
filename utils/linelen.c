/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   linelen.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xmatute- <xmatute-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 15:24:15 by xmatute-          #+#    #+#             */
/*   Updated: 2022/12/06 13:17:33 by xmatute-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	linelen(const char *s)
{
	int	l;

	l = 0;
	while (s[l] && s[l] != '\n')
		l++;
	return (l);
}

int	columlen(const char *s)
{
	int	l;
	int	w;

	w = linelen(s) + 1;
	l = 0;
	while (s[l] && s[l] != '\n')
		l += w;
	return (l/w - 1);
}
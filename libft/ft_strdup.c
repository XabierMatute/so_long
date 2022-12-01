/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xmatute- <xmatute-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 13:56:25 by xmatute-          #+#    #+#             */
/*   Updated: 2022/09/15 14:07:43 by xmatute-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup( const char *str1 )
{
	char	*s;

	s = malloc(sizeof(char) * (ft_strlen(str1) + 1));
	if (!s)
		return (0);
	ft_strlcpy(s, str1, (ft_strlen(str1) + 1));
	return (s);
}

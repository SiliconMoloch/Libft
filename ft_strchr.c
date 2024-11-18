/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabokhar <yabokhar@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 14:48:03 by yabokhar          #+#    #+#             */
/*   Updated: 2024/11/18 01:28:02 by yabokhar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)

{
	size_t	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == ((unsigned char) c))
			return (&((char *)s)[i]);
		i++;
	}
	if ((unsigned char) c == '\0')
		return (&((char *) s)[i]);
	return (NULL);
}

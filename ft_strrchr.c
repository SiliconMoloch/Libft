/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabokhar <yabokhar@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 15:07:35 by yabokhar          #+#    #+#             */
/*   Updated: 2024/11/22 16:12:59 by yabokhar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)

{
	size_t	i;
	char	*ret;

	i = 0;
	ret = NULL;
	while (s[i])
	{
		if (s[i] == (unsigned char) c)
			ret = &((char *) s)[i];
		i++;
	}
	if ((unsigned char) c == '\0')
		ret = &((char *) s)[i];
	return (ret);
}

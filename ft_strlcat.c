/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabokhar <yabokhar@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 22:22:45 by yabokhar          #+#    #+#             */
/*   Updated: 2024/11/22 16:13:38 by yabokhar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	smallest_of_both(size_t a, size_t b)

{
	if (a < b)
		return (a);
	return (b);
}

size_t	ft_strlcat(char *dest, const char *src, size_t size)

{
	size_t	i;
	size_t	j;
	size_t	src_size;
	size_t	dest_size;

	i = 0;
	j = ft_strlen(dest);
	src_size = ft_strlen(src);
	dest_size = smallest_of_both(j, size);
	if (size == 0)
		return (src_size + dest_size);
	while (src[i] && i + j < size - 1)
	{
		dest[i + j] = src[i];
		i++;
	}
	dest[i + j] = '\0';
	return (src_size + dest_size);
}

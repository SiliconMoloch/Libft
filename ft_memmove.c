/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabokhar <yabokhar@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 21:51:30 by yabokhar          #+#    #+#             */
/*   Updated: 2024/11/18 01:27:20 by yabokhar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)

{
	if (src < dest)
	{
		while (n-- > 0)
			((unsigned char *) dest)[n] = ((unsigned char *) src)[n];
	}
	else
		dest = ft_memcpy(dest, src, n);
	return (dest);
}

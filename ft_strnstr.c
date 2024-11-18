/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabokhar <yabokhar@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 12:19:08 by yabokhar          #+#    #+#             */
/*   Updated: 2024/11/18 01:28:41 by yabokhar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)

{
	size_t	i;
	size_t	j;

	if (!little[0])
		return ((char *) big);
	if (len == 0)
		return (0);
	i = 0;
	while (big[i] && i < len - ft_strlen(little) + 1)
	{
		j = 0;
		while (big[i + j] == little[j] && little[j])
			j++;
		if (!little[j])
			return (&((char *) big)[i]);
		i++;
	}
	return (NULL);
}

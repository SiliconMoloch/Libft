/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabokhar <yabokhar@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 18:21:01 by yabokhar          #+#    #+#             */
/*   Updated: 2024/11/18 01:28:06 by yabokhar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)

{
	char	*r;
	size_t	size;

	size = 0;
	while (s[size])
		size++;
	r = malloc(sizeof(char) * (size + 1));
	if (!r)
		return (NULL);
	size = 0;
	while (s[size])
	{
		r[size] = s[size];
		size++;
	}
	r[size] = '\0';
	return (r);
}

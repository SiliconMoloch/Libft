/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabokhar <yabokhar@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 19:07:58 by yabokhar          #+#    #+#             */
/*   Updated: 2024/11/18 01:28:53 by yabokhar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*empty_string(void)

{
	char	*r;

	r = malloc(sizeof(char) * 1);
	if (!r)
		return (NULL);
	r[0] = '\0';
	return (r);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)

{
	char	*r;
	size_t	i;
	size_t	s_size;

	s_size = 0;
	while (s[s_size])
		s_size++;
	if (start > s_size)
		return (empty_string());
	if (start + len >= s_size)
		len = s_size - start;
	r = malloc(sizeof(char) * (len + 1));
	if (!r)
		return (NULL);
	i = 0;
	while (i < len && s[start])
	{
		r[i] = s[start];
		i++;
		start++;
	}
	r[i] = '\0';
	return (r);
}

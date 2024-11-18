/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabokhar <yabokhar@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 21:27:21 by yabokhar          #+#    #+#             */
/*   Updated: 2024/11/18 01:28:47 by yabokhar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)

{
	char	*ret;
	size_t	i;
	size_t	length;

	i = 0;
	if (!set || !s1)
		return (NULL);
	length = ft_strlen(s1);
	while (ft_strchr(set, s1[i]) && s1[i])
		i++;
	while (ft_strchr(set, s1[length - 1]) && length > i)
		length--;
	ret = ft_substr(s1, i, length - i);
	if (!ret)
		return (NULL);
	return (ret);
}

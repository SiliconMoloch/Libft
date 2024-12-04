/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabokhar <yabokhar@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 19:15:53 by yabokhar          #+#    #+#             */
/*   Updated: 2024/11/18 01:26:35 by yabokhar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_abs(int n)

{
	if (n < 0)
		return (-n);
	return (n);
}

static int	memory_to_allocate(int abs_n, int negative)

{
	int	count;

	count = 1;
	while (abs_n >= 10)
	{
		count++;
		abs_n /= 10;
	}
	count += negative;
	return (count);
}

char	*ft_itoa(int n)

{
	int		size;
	char	*s;

	if (n == INT_MIN)
		return (ft_strdup("-2147483648"));
	size = memory_to_allocate(ft_abs(n), (n < 0));
	s = ft_calloc(size + 1, sizeof(char));
	if (!s)
		return (NULL);
	if (n < 0)
		s[0] = '-';
	n = ft_abs(n);
	s[size] = '\0';
	s[--size] = (n % 10) + '0';
	while (n >= 10)
	{
		n /= 10;
		s[--size] = (n % 10) + '0';
	}
	return (s);
}

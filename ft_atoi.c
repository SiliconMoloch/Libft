/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabokhar <yabokhar@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/12 17:34:47 by yabokhar          #+#    #+#             */
/*   Updated: 2024/11/14 12:30:28 by yabokhar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	overflow_handling(int sign)

{
	if (sign < 0)
		return (0);
	return (-1);
}

int	ft_atoi(const char *nptr)

{
	size_t				i;
	int					sign;
	unsigned long long	value;

	i = 0;
	sign = 1;
	value = 0;
	while ((nptr[i] >= 9 && nptr[i] <= 13) || nptr[i] == ' ')
		i++;
	if (nptr[i] == '+' || nptr[i] == '-')
	{
		if (nptr[i] == '-')
			sign *= -1;
		i++;
	}
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		if (value > LLONG_MAX)
			return (overflow_handling(sign));
		value = (value * 10) + nptr[i] - '0';
		i++;
	}
	if (value > LLONG_MAX)
		return (overflow_handling(sign));
	return (sign * ((int)(value)));
}

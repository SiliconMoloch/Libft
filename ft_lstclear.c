/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabokhar <yabokhar@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 16:52:19 by yabokhar          #+#    #+#             */
/*   Updated: 2024/11/11 16:52:22 by yabokhar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))

{
	t_list	*temp;

	if (!lst || !del)
		return ;
	while (*lst)
	{
		temp = ((*lst)->next);
		ft_lstdelone(*lst, del);
		*lst = temp;
	}
}

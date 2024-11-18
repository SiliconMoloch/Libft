/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabokhar <yabokhar@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 17:00:44 by yabokhar          #+#    #+#             */
/*   Updated: 2024/11/11 17:00:48 by yabokhar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))

{
	t_list	*head;
	t_list	*node;
	void	*f_applied_content;

	if (!lst || !f || !del)
		return (NULL);
	head = NULL;
	while (lst != NULL)
	{
		f_applied_content = f(lst->content);
		node = ft_lstnew(f_applied_content);
		if (node == NULL)
		{
			del(f_applied_content);
			ft_lstclear(&head, del);
			return (head);
		}
		ft_lstadd_back(&head, node);
		lst = lst->next;
	}
	return (head);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maeverqu <maeverqu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/03 13:18:19 by maeverqu          #+#    #+#             */
/*   Updated: 2026/05/04 16:58:29 by maeverqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_lst;
	t_list	*temp;

	if (!lst || !f || !del)
		return (NULL);
	new_lst = ft_lstnew((*f)(lst->content));
	if (!new_lst)
		return (NULL);
	temp = new_lst;
	while (lst->next)
	{
		temp->next = ft_lstnew((*f)(lst->next->content));
		if (!temp->next)
			return (ft_lstclear(&new_lst, del), NULL);
		temp = temp->next;
		lst = lst->next;
	}
	return (new_lst);
}

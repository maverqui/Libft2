/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maeverqu <maeverqu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/01 13:55:03 by maeverqu          #+#    #+#             */
/*   Updated: 2026/05/01 17:03:51 by maeverqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!new || !lst)
		return ;
	new->next = *lst;
	(*lst) = new;
}

int main(void)
{
	t_list *a;
	t_list *b;

	a = ft_lstnew(NULL);
	b = ft_lstnew(NULL);
	
	// [a]->NULL

	ft_lstadd_front(&a, b);
	
	// [b]->[a]->NULL
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maeverqu <maeverqu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/03 13:18:19 by maeverqu          #+#    #+#             */
/*   Updated: 2026/05/04 11:38:20 by maeverqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
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

// void *double_content(void *content)
// {
// 	int *new_val = malloc(sizeof(int));
// 	if (!new_val)
// 		return (NULL);
// 	*new_val = (*(int *)content) * 2;
// 	return (new_val);
// }

// // Fonction pour libérer le contenu
// void del_content(void *content)
// {
// 	free(content);
// }

// int main(void)
// {
// 	t_list *ma_liste = NULL;
// 	int val1 = 10;
// 	int val2 = 20;

// 	// 1. Test de ft_lstnew et ft_lstadd_front
// 	ft_lstadd_front(&ma_liste, ft_lstnew(&val1));
// 	ft_lstadd_front(&ma_liste, ft_lstnew(&val2));

// 	// 2. Test de ft_lstsize
// 	printf("Taille de la liste : %d\n", ft_lstsize(ma_liste));

// 	// 3. Test de ft_lstmap
// 	t_list *liste_double = ft_lstmap(ma_liste, double_content, del_content);

// 	// Affichage de la nouvelle liste
// 	printf("Premier wagon (liste double) : %d\n", *(int *)(liste_double->content));
// 	printf("Deuxième wagon (liste double) : %d\n", *(int *)(liste_double->next->content));

// 	// Nettoyage final
// 	ft_lstclear(&ma_liste, NULL); // On ne free pas val1/val2 car ils sont sur la stack ici
// 	ft_lstclear(&liste_double, del_content);

// 	return (0);
// }
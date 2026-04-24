/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maeverqu <maeverqu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/24 13:50:06 by maeverqu          #+#    #+#             */
/*   Updated: 2026/04/24 15:59:28 by maeverqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (size == 0)
		return (ft_strlen(src));
	while (i < size - 1 && src[i])
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (ft_strlen(src));
}
// int main()
// {
// 	char dst[10];
// 	char src[] = "abcd";
// 	size_t ret;
	
// 	ret = ft_strlcpy(dst, src, 5);
// 	printf("Source : %s (longueur %zu)\n", src, strlen(src));
// 	printf("Destination : %s\n", dst);
// 	printf("Valeur de retour : %zu\n\n", ret);
// }
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maeverqu <maeverqu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/27 13:47:09 by maeverqu          #+#    #+#             */
/*   Updated: 2026/04/27 16:40:18 by maeverqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strdup(const char *s)
{
	char*	s2;
	size_t	i;

	i = 0;
	s2 = malloc(sizeof(char) * ft_strlen(s) + 1);
	if (!s2 || !s)
		return (NULL);
	while (s[i])
	{
		s2[i] = s[i];
		i++;
	}
	s2[i] = '\0';
	return ((char *)s2);
}

// int main()
// {
// 	const char *str = "abcd";
// 	char *s2 = ft_strdup(str);
// 	printf("s2: %s\n", s2);
//	free(s2);
// }
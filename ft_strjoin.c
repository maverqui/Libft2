/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maeverqu <maeverqu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/27 16:40:28 by maeverqu          #+#    #+#             */
/*   Updated: 2026/04/27 18:07:54 by maeverqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
	char	*total_s;

	if (!s1)
		return (ft_strdup(s2));
	if (!s2)
		return (ft_strdup(s1));
	total_s = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!total_s)
		return (NULL);
	ft_strlcpy(total_s, s1, ft_strlen(s1) + 1);
	ft_strlcat(total_s, s2, ft_strlen(s1) + ft_strlen(s2) + 1);
	return (total_s);
}

int main(){
	char *str1 = "bonjour ";
	char *str2 = "ca va ?";
	char *total = ft_strjoin(str1, str2);
	printf("total: %s\n", total);
	free(total);
	return (0);
}
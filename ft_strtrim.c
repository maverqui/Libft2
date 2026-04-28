/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maeverqu <maeverqu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/27 18:08:38 by maeverqu          #+#    #+#             */
/*   Updated: 2026/04/28 12:47:19 by maeverqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	start;
	size_t	end;
	char	*res;

	i = 0;
	start = 0;
	end = ft_strlen(s1) - 1;
	if (!s1)
		return (NULL);
	if (!set)
		return (ft_strdup(s1));
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;
	while (end > start && ft_strchr(set, s1[end]))
		end--;
	res = malloc(sizeof(char) * ((end - start) + 1));
	if (!res)
		return (NULL);
	while (start <= end)
		res[i++] = s1[start++];
	return (res);
}
int main(){
	char *str = "pouetbonjourteoup";
	char *set = "pouet";
	char *res = ft_strtrim(str, set);
	printf("res: %s\n", res);
	free(res);
	return (0);
}
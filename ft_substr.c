/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maeverqu <maeverqu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/27 13:59:47 by maeverqu          #+#    #+#             */
/*   Updated: 2026/05/04 16:50:58 by maeverqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*new_s;
	size_t	real_len;

	i = 0;
	if (!s)
		return (NULL);
	if (start >= ft_strlen(s))
		return (ft_strdup(""));
	if (len > ft_strlen(s) - start)
		real_len = ft_strlen(s) - start;
	else
		real_len = len;
	new_s = malloc(sizeof(char) * (real_len + 1));
	if (!new_s)
		return (NULL);
	while (i < real_len)
	{
		new_s[i] = s[start + i];
		i++;
	}
	new_s[i] = '\0';
	return (new_s);
}

// int main(){
// 	char *str0 = "bonjour";
// 	char *str1 = ft_substr(str0, 3, 3);
// 	char *str2 = ft_substr(str0, 5, 10);
// 	char *str3 = ft_substr(str0, 0, 7);
// 	printf("str1: %s\n", str1);
// 	printf("str2: %s\n", str2);
// 	printf("str3: %s\n", str3);
// 	free(str1);
// 	free(str2);
// 	free(str3);
// }
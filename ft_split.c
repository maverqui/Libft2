/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maeverqu <mae.verquin@learner.42.tech>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/29 17:49:01 by maeverqu          #+#    #+#             */
/*   Updated: 2026/04/29 19:33:28 by maeverqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t  count_words(const char *s, char c)
{
	size_t  count;
	size_t  i;

	count = 0;
	i = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i])
		{
			count++;
			while (s[i] && s[i] != c)
				i++;
		}
		i++;
	}
	return (count);
}

char **ft_split(char const *s, char c)
{
	char	**res;
	size_t	i;
	size_t	count;
	size_t	len;
	size_t	word;

	word = 0;
	i = 0;
	count = count_words(s, c);
	if (!s)
		return (NULL);
	res = malloc(sizeof(char *) * (count + 1));
	if (!res)
		return (NULL);
	while (s[i])
	{
		len = 0;
		while (s[i] == c)
			i++;
		if (s[i])
		{
			while (s[i + len] && s[i + len] != c)
				len++;
			res[word] = malloc(sizeof(char) * (len + 1));
			if (!res[word++])
				return (NULL);
			ft_strlcpy(res, &s[i], len + 1);
		}
		i++;
	} 
	return (res);
}
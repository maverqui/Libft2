/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maeverqu <maeverqu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/29 17:49:01 by maeverqu          #+#    #+#             */
/*   Updated: 2026/05/05 12:19:22 by maeverqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	count_words(const char *s, char c)
{
	size_t	count;
	size_t	i;

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
	}
	return (count);
}

void	free_split(char **res)
{
	size_t	i;

	i = 0;
	if (!res)
		return ;
	while (res[i])
	{
		free(res[i]);
		res[i] = NULL;
		i++;
	}
	free(res);
}

void	alloc_words(char **res, char c, const char *s)
{
	size_t	len;
	size_t	word;
	size_t	i;

	i = 0;
	word = 0;
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
			if (!res[word])
				return (free_split(res));
			ft_strlcpy(res[word++], &s[i], len + 1);
			i += len;
		}
	}
}

char	**ft_split(char const *s, char c)
{
	char	**res;
	size_t	count;

	count = count_words(s, c);
	if (!s)
		return (NULL);
	res = malloc(sizeof(char *) * (count + 1));
	if (!res)
		return (NULL);
	alloc_words(res, c, s);
	res[count] = NULL;
	return (res);
}

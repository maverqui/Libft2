/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maeverqu <maeverqu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/30 12:06:49 by maeverqu          #+#    #+#             */
/*   Updated: 2026/04/30 15:34:28 by maeverqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strmapi(char const *s, char (*f)(unsigned	int, char))
{
	char	*str;
	size_t	len;
	size_t	i;

	len = ft_strlen(s);
	i = 0;
	if (!s || !f)
		return (NULL);
	str = malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	while (s[i])
	{
		str[i] = (*f)(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}

char my_transform(unsigned int i, char c)
{
    if (i % 2 == 0 && (c >= 'a' && c <= 'z'))
        return (c - 32);
    return (c);
}

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char *str = "hello world";
    char *res;
	res = ft_strmapi(str, &my_transform);
    printf("Original : %s\n", str);
    printf("Résultat : %s\n", res);
    free(res);
    return (0);
}
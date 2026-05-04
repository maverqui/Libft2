/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maeverqu <maeverqu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/30 15:43:07 by maeverqu          #+#    #+#             */
/*   Updated: 2026/05/04 16:55:20 by maeverqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	while (s[i])
	{
		(*f)(i, &s[i]);
		i++;
	}
}

// void my_transform(unsigned int i, char *c)
// {
//     if (i % 2 == 0 && (*c >= 'a' && *c <= 'z'))
//         *c = *c - 32;
// }

// #include <stdio.h>
// #include <stdlib.h>

// int main(void)
// {
//     char *str = ft_strdup("hello world");
//     printf("Original : %s\n", str);
// 	ft_striteri(str, &my_transform);
//     printf("Résultat : %s\n", str);
// 	free(str);
//     return (0);
// }
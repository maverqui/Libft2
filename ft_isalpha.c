/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maeverqu <mae.verquin@learner.42.tech>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/21 20:47:11 by maeverqu          #+#    #+#             */
/*   Updated: 2026/04/21 20:47:11 by maeverqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}

// #include <stdio.h>
// int main(void)
// {
// 	printf("%d\n", ft_isalpha('a'));
// 	return (0);
// }

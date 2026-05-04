/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maeverqu <maeverqu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/30 08:48:29 by maeverqu          #+#    #+#             */
/*   Updated: 2026/05/04 16:54:53 by maeverqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	get_len(int nb)
{
	size_t	len;

	len = 0;
	if (nb == 0)
		return (1);
	if (nb < 0)
		len++;
	while (nb != 0)
	{
		nb = nb / 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	long	nb;
	char	*str;
	int		len;
	int		neg;

	nb = n;
	len = get_len(nb);
	str = malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	str[len] = '\0';
	neg = (nb < 0);
	if (neg)
	{
		str[0] = '-';
		nb = -nb;
	}
	while (len > neg)
	{
		str[len - 1] = (nb % 10) + '0';
		nb = (nb / 10);
		len--;
	}
	return (str);
}

// int main() {
// 	char	*res;
// 	res = ft_itoa(42);
// 	printf("%s\n", res);
// 	res = ft_itoa(-42);
// 	printf("%s\n", res);
// 	res = ft_itoa(2147483647);
// 	printf("%s\n", res);
// 	res = ft_itoa(-2147483648);
// 	printf("%s\n", res);
// 	res = ft_itoa(0);
// 	printf("%s\n", res);
// 	res = ft_itoa(2147483648);
// 	printf("%s\n", res);
// }
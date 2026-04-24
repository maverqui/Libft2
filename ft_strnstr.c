/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maeverqu <maeverqu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/24 13:44:12 by maeverqu          #+#    #+#             */
/*   Updated: 2026/04/24 13:44:18 by maeverqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strnstr(const char *big, const char *little, size_t len)
{
    size_t  i;
    size_t  j;

    i = 0;
    if (!little)
        return ((char *)big);
    while (i < len && big[i])
    {
        j = 0;
        while (big[i + j] == little[j])     
            j++;
        if (!little[j]) 
            return ((char *)&big[i]);
        i++;
    }
    return (NULL);
}
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

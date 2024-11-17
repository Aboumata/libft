/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboumata <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 22:08:02 by aboumata          #+#    #+#             */
/*   Updated: 2024/11/04 22:08:02 by aboumata         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	if (*needle == '\0')
		return ((char *)haystack);
	i = 0;
	while (haystack[i] != '\0' && i < len)
	{
		j = 0;
		while (i + j < len && needle[j] != '\0' && haystack[i + j] == needle[j])
			j++;
		if (needle[j] == '\0')
			return ((char *)&haystack[i]);
		i++;
	}
	return (NULL);
}

// /*int	main(void)
// {
// 	const char	*haystack = "Abde arrahman Boumata";
// 	const char	*needle1 = "Boumata";
// 	const char	*needle2 = "";
// 	const char	*needle3 = "Amghar";
//
// 	// printf("Result 1: %s\n", ft_strnstr(haystack, needle1, 25));
// 	// printf("Result 2: %s\n", ft_strnstr(haystack, needle2, 11));
// 	// printf("Result 3: %s\n", ft_strnstr(haystack, needle3, 11));
// 	// printf("Result 4: %s\n", ft_strnstr(haystack, needle1, 5));
// 	// printf("Result 5: %s\n\n", ft_strnstr(((void *)0), "fake", 3));
// 	//printf("Result 5: %s\n\n", ft_strnstr(NULL, needle1, 9));
// 	printf("Result 5: %s\n\n", ft_strnstr(NULL, "fake", 5));
// 	//printf("Result 5: %s\n\n", strnstr(((void *)0), "fake", 3));
// 	// printf("Result 5: %s\n\n", strnstr("", needle1, -1));
//
// 	return (0);
// }*/
// int main() {
// 	printf("%s",ft_strnstr(NULL,"hey",2));
// }
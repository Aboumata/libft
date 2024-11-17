/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strrchr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboumata <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 20:09:38 by aboumata          #+#    #+#             */
/*   Updated: 2024/10/22 21:14:51 by aboumata         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	len;

	len = ft_strlen(s);
	if ((unsigned char)c == '\0')
		return ((char *)s + ft_strlen(s));
	while (len > 0)
	{
		if ((unsigned char)s[len - 1] == (unsigned char)c)
			return ((char *)s + len - 1);
		len--;
	}
	return (NULL);
}

// int main ()
// {
// 	char	str[] = "Hello World, welcome to the world of C!";
// 	char	*result;
//
// 	result = ft_strrchr(str, 'H');
// 	if (result != NULL) {
// 		printf("The last occurrence of 'H' is at position: %ld\n", result
// 			- str);
// 		printf("Substring starting from the last 'H': %s\n", result);
// 	} else {
// 		printf("'H' not found in the string.\n");
// 	}
// 	result = ft_strrchr(str, 'z');
// 	if (result != NULL) {
// 		printf("The last occurrence of 'z' is at position: %ld\n", result
// 			- str);
// 		printf("Substring starting from the last 'z': %s\n", result);
// 	} else {
// 		printf("'z' not found in the string.\n");
// 	}
// 	result = ft_strrchr(str, '\0');
// 	if (result != NULL) {
// 		printf("The null terminator is at position: %ld\n", result - str);
// 	}
// 	return (0);
// }

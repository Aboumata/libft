/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboumata <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 22:08:16 by aboumata          #+#    #+#             */
/*   Updated: 2024/11/04 22:08:16 by aboumata         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(const char *src, size_t start, size_t len)
{
	size_t	len_src;
	char	*result;

	if (src == NULL)
		return (NULL);
	len_src = ft_strlen(src);
	if (start >= len_src)
	{
		result = malloc(1);
		if (result == NULL)
			return (NULL);
		result[0] = '\0';
		return (result);
	}
	if (start + len > len_src)
		len = len_src - start;
	result = (char *)malloc(len + 1);
	if (result == NULL)
		return (NULL);
	ft_strlcpy(result, src + start, len + 1);
	return (result);
}

/*int	main(void)
{
	const char	*original = "Hello, world!";
	char		*sub;

	sub = ft_substr(original, 7, 5);
	printf("Extracted substring: '%s'\n", sub);
	free(sub);
	sub = ft_substr(original, 20, 5);
	printf("Start index out of bounds: '%s'\n", sub);
	free(sub);
	sub = ft_substr(original, 7, 50);
	printf("Length goes beyond end: '%s'\n", sub);
	free(sub);
	return (0);
}
*/
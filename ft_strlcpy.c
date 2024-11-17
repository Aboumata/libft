/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboumata <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 22:07:41 by aboumata          #+#    #+#             */
/*   Updated: 2024/11/04 22:07:41 by aboumata         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	len_src;

	len_src = 0;
	while (src[len_src])
		len_src++;
	if (dstsize == 0)
		return (len_src);
	i = 0;
	while (src[i] != '\0' && i < dstsize - 1)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (len_src);
}

/*int main()
{
	const char	src[] = "Hello, world!";
	char		dst[20];
	size_t		dstsize;
	size_t		copied_length;

	dstsize = sizeof(dst);
	copied_length = ft_strlcpy(dst, src, dstsize);
	printf("Source: %s\n", src);
	printf("Destination: %s\n", dst);
	printf("Length of source string: %llu\n", copied_length);
	return (0);
}
*/
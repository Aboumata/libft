/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboumata <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 22:07:34 by aboumata          #+#    #+#             */
/*   Updated: 2024/11/04 22:07:34 by aboumata         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	len_src;
	size_t	len_dst;

	len_src = ft_strlen(src);
	if (dstsize == 0)
		return (len_src);
	len_dst = ft_strlen(dst);
	if (dstsize <= len_dst)
		return (dstsize + len_src);
	i = 0;
	while (src[i] != '\0' && (len_dst + i) < dstsize - 1)
	{
		dst[len_dst + i] = src[i];
		i++;
	}
	dst[len_dst + i] = '\0';
	return (len_dst + len_src);
}
/*
int	main(void)
{
	printf("%zu\n", strlcat(NULL, NULL, 0));
}

	dstsize = sizeof(buffer);
	printf("Initial dst: \"%s\"\n", buffer);
	printf("Source: \"%s\"\n", source);
	printf("Buffer size: %llu\n", dstsize);
	result = ft_strlcat(buffer, source, dstsize);
	printf("\nAfter ft_strlcat:\n");
	printf("Concatenated dst: \"%s\"\n", buffer);
	printf("Total length attempted: %llu\n", result);
	dstsize = sizeof(buffer2);
	printf("\nInitial dst (small buffer): \"%s\"\n", buffer2);
	result = ft_strlcat(buffer2, source, dstsize);
	printf("After ft_strlcat with limited space:\n");
	printf("Concatenated dst: \"%s\"\n", buffer2);
	printf("Total length attempted: %llu\n", result);
	dstsize = 0;
	printf("\nInitial dst (dstsize = 0): \"%s\"\n", buffer3);
	result = ft_strlcat(buffer3, source, dstsize);
	printf("After ft_strlcat with dstsize = 0:\n");
	printf("Concatenated dst: \"%s\"\n", buffer3);
	printf("Total length attempted: %llu\n", result);
	return (0);
}
*/
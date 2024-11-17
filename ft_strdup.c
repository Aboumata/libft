/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboumata <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 22:07:11 by aboumata          #+#    #+#             */
/*   Updated: 2024/11/04 22:07:11 by aboumata         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	int		i;
	char	*ptr;
	size_t	len_src;

	len_src = ft_strlen(src);
	ptr = (char *)malloc(len_src + 1);
	if (ptr == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (src[i] != '\0')
	{
		ptr[i] = src[i];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}

/*int	main(void)
{
	const char	*original = "Hello, World!";
	char		*duplicate;

	duplicate = ft_strdup(original);
	if (duplicate == NULL)
	{
		printf("Memory allocation failed.\n");
		return (1);
	}
	printf("Original: %s\n", original);
	printf("Duplicate: %s\n", duplicate);
	free(duplicate);
	return (0);
}
*/
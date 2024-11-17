/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboumata <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 22:05:20 by aboumata          #+#    #+#             */
/*   Updated: 2024/11/04 22:05:20 by aboumata         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*txt;

	txt = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (txt[i] == (unsigned char)c)
		{
			return (&txt[i]);
		}
		i++;
	}
	return (NULL);
}

/*int main()
{
	char	arr[] = "Hello, World!";
	char	*result;

	result = ft_memchr(arr, 'o', sizeof (arr));
	if (result) {
		printf("Character found at position: %lld\n", result - arr);
	} else {
		printf("Character not found.\n");
	}
	return (0);
}
*/
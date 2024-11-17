/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboumata <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 22:05:27 by aboumata          #+#    #+#             */
/*   Updated: 2024/11/04 22:05:27 by aboumata         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*txt1;
	unsigned char	*txt2;

	txt1 = (unsigned char *)s1;
	txt2 = (unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (txt1[i] != txt2[i])
			return (txt1[i] - txt2[i]);
		i++;
	}
	return (0);
}

/*int main()
{

	// char	arr1[] = "hello";
	// char	arr2[] = "heLlo";
	// int		result;
	//
	// result = ft_memcmp(arr1, arr2, 5);
	// if (result == 0) {
	// 	printf("The memory blocks are equal.\n");
	// } else if (result < 0) {
	// 	printf("arr1 is less than arr2.\n");
	// } else {
	// 	printf("arr1 is greater than arr2.\n");
	// }
	// return (0);
}
*/
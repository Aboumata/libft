/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboumata <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 22:05:33 by aboumata          #+#    #+#             */
/*   Updated: 2024/11/04 22:05:33 by aboumata         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*txt1_src;
	unsigned char	*txt2_dst;

	if (dest == NULL && src == NULL)
		return (NULL);
	txt1_src = (unsigned char *)src;
	txt2_dst = (unsigned char *)dest;
	i = 0;
	while (i < n)
	{
		txt2_dst[i] = txt1_src[i];
		i++;
	}
	return (dest);
}

// int	main(void)
// {
// 	const int numbers[] = {1, 2, 3, 4, 5};
// 	int num_copy[5];
// 	int i;
//
// 	ft_memcpy(num_copy, numbers, 5 * sizeof(int));
//
// 	i = 0;
// 	while (i < 5)
// 	{
// 		printf("%d ", num_copy[i]);
// 		i++;
// 	}
// 	printf("\n");
// 	return (0);
// }

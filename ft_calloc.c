/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboumata <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 22:00:23 by aboumata          #+#    #+#             */
/*   Updated: 2024/11/04 22:00:23 by aboumata         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t num, size_t size)
{
	size_t	total_size;
	void	*ptr;

	total_size = num * size;
	if (num != 0 && total_size / num != size)
		return (NULL);
	ptr = malloc(total_size);
	if (ptr == NULL)
		return (NULL);
	ft_memset(ptr, 0, total_size);
	return (ptr);
}

// int main()
// {
// 	size_t	num;
// 	size_t	size;
// 	size_t	*array;
//
// 	num = 10;
// 	size = sizeof(int);
// 	array = (size_t *) ft_calloc(num, size);
// 	if (array == NULL) {
// 		printf("Memory allocation failed.\n");
// 		return (1);
// 	}
// 	for (size_t i = 0; i < num; i++) {
// 		array[i] = i + 1;
// 		printf("%zu ", array[i]);
// 	}
// 	printf("\n");
// 	free(array);
// 	return (0);
// }
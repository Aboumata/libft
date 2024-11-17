/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memset.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboumata <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 21:16:52 by aboumata          #+#    #+#             */
/*   Updated: 2024/10/23 21:19:59 by aboumata         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *ptr, int value, size_t num)
{
	size_t			i;
	unsigned char	*p;

	p = (unsigned char *)ptr;
	i = 0;
	while (i < num)
	{
		p[i] = (unsigned char)value;
		i++;
	}
	return (ptr);
}

// int main(void) {
// 	//-2004   11111000
// 	int i = 0;
// 	// ft_memset(&i, -1, 4);
// 	// ft_memset(&i, -8, 2);
// 	ft_memset(&i, 2004, 2);
//
// 	printf("%d", i);
// 	return (0);
// }

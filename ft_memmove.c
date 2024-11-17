/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboumata <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 22:05:40 by aboumata          #+#    #+#             */
/*   Updated: 2024/11/04 22:05:40 by aboumata         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*txt1;
	unsigned char	*txt2;

	txt1 = (unsigned char *)src;
	txt2 = (unsigned char *)dest;
	if (txt2 == NULL && txt1 == NULL)
		return (NULL);
	if (txt1 < txt2 && txt2 < txt1 + n)
	{
		while (n--)
			txt2[n] = txt1[n];
	}
	else
	{
		i = 0;
		while (i < n)
		{
			txt2[i] = txt1[i];
			i++;
		}
	}
	return (dest);
}

// int main()
// {
// 	int i = 0;
// 	int str[] = {1, 2, 3, 4, 5, 6};
//
// 	ft_memmove(str + 2, str, 4 * sizeof(int));
// 	while (i < 6)
// 	{
// 		printf("%d ", str[i]);
// 		i++;
// 	}
// 	return (0);
// }
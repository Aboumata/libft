/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboumata <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 21:44:15 by aboumata           #+#    #+#            */
/*   Updated: 2024/11/04 21:44:15 by aboumata           ###   ########.fr     */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t			i;
	unsigned char	*p;

	p = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		p[i] = 0;
		i++;
	}
}

/*int main(void) {

	char buffer[10] = "Hello";

	printf("Before bzero: %s\n", buffer);

	ft_bzero(buffer, sizeof(buffer));

	printf("After bzero: %s\n", buffer);

	return (0);
}
*/
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strchr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboumata <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 13:24:10 by aboumata          #+#    #+#             */
/*   Updated: 2024/10/22 14:20:14 by aboumata         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *string, int c)
{
	int				i;
	unsigned char	c_char;

	c_char = (unsigned char)c;
	i = 0;
	while (string[i] != '\0')
	{
		if ((unsigned char)string[i] == c_char)
			return ((char *)string + i);
		i++;
	}
	if (c_char == '\0')
		return ((char *)string + i);
	return (NULL);
}

/*int	main(void)
{
	const char	str[] = "Hello, World!";
	char		chara;
	char		*result;

	chara = 'm';
	result = ft_strchr(str, chara);
	if (result)
		printf("Found the character \'%c\' in position %lld in \"%s\"\n", chara,
			result - str, result);
	else
		printf("Not found!");
	return (0);
}
*/

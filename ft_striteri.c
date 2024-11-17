/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboumata <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 22:07:20 by aboumata          #+#    #+#             */
/*   Updated: 2024/11/04 22:07:20 by aboumata         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	upper_lower(unsigned int i, char *c)
{
	if (i % 2)
		*c = ft_toupper(*c);
	else
		*c = ft_tolower(*c);
}

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	if (s == NULL || f == NULL)
		return ;
	i = 0;
	while (s[i] != '\0')
	{
		f(i, &s[i]);
		i++;
	}
}

/*int main ()
{
	char	str[] = "HeLLo WoRLd!";

	ft_striteri(str, upper_lower);
	printf("Transformed string: %s\n", str);
}
 */
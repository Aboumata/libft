/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboumata <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 22:07:26 by aboumata          #+#    #+#             */
/*   Updated: 2024/11/04 22:07:26 by aboumata         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	len_s1;
	size_t	len_s2;
	size_t	size;
	char	*concat_strs;

	if (s1 == NULL && s2 == NULL)
		return (NULL);
	if (s1 == NULL)
		return (ft_strdup(s2));
	if (s2 == NULL)
		return (ft_strdup(s1));
	len_s2 = ft_strlen(s2);
	len_s1 = ft_strlen(s1);
	size = len_s1 + len_s2 + 1;
	concat_strs = (char *)malloc(size);
	if (concat_strs == NULL)
		return (NULL);
	ft_strlcpy(concat_strs, s1, len_s1 + 1);
	ft_strlcat(concat_strs, s2, size);
	return (concat_strs);
}

/*int main ()
{
	char	*s1;
	char	*s2;
	char	*result;

	s1 = "Hello, ";
	s2 = "world!";
	result = ft_strjoin(s1, s2);
	if (result)
	{
		printf("Joined string: %s\n", result);
		free(result);
	}
	else
	{
		printf("Failed to join strings.\n");
	}
	return (0);
}
*/
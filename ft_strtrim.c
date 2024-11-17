/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboumata <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 22:08:11 by aboumata          #+#    #+#             */
/*   Updated: 2024/11/04 22:08:11 by aboumata         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	a_set(char c, char const *set)
{
	while (*set)
	{
		if (*set == c)
			return (1);
		set++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	size_t	len;
	char	*result;

	if (s1 == NULL || set == NULL)
		return (NULL);
	start = 0;
	while (s1[start] != '\0' && a_set(s1[start], set))
		start++;
	end = ft_strlen(s1);
	while (end > start && a_set(s1[end - 1], set))
		end--;
	len = end - start;
	result = (char *)malloc(len + 1);
	if (result == NULL)
		return (NULL);
	ft_strlcpy(result, &s1[start], len + 1);
	result[len] = '\0';
	return (result);
}

/*int main ()
{
	char	*result;

	result = ft_strtrim("   Hello World   ", " ");
	printf("Test 1 - Trimmed: '%s'\n", result);
	free(result);
	result = ft_strtrim("Hello World", " ");
	printf("Test 2 - Trimmed: '%s'\n", result);
	free(result);
	result = ft_strtrim("   ", " ");
	printf("Test 3 - Trimmed: '%s'\n", result);
	free(result);
	result = ft_strtrim("", " ");
	printf("Test 4 - Trimmed: '%s'\n", result);
	free(result);
	result = ft_strtrim(NULL, " ");
	printf("Test 5 - Trimmed: '%s'\n", result);
	printf("Test 5 - Result is NULL as expected.\n");
	result = ft_strtrim("***Hello, World!***", "*");
	printf("Test 6 - Trimmed: '%s'\n", result);
	free(result);
	return (0);
}
*/
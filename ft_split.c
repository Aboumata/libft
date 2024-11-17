/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboumata <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 22:06:51 by aboumata          #+#    #+#             */
/*   Updated: 2024/11/04 22:06:51 by aboumata         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static const char	*skip_deli(char const *s, char c)
{
	while (*s && *s == c)
		s++;
	return (s);
}

static int	count_tokens(const char *s, char delim)
{
	int	count;
	int	in_token;

	count = 0;
	in_token = 0;
	while (*s)
	{
		if (*s != delim && in_token == 0)
		{
			in_token = 1;
			count++;
		}
		else if (*s == delim)
		{
			in_token = 0;
		}
		s++;
	}
	return (count);
}

static char	**free_result(char **result, int i)
{
	while (i > 0)
		free(result[--i]);
	free(result);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	int		len;
	int		i;
	char	**result;

	if (s == NULL)
		return (NULL);
	result = malloc((count_tokens(s, c) + 1) * sizeof(char *));
	if (result == NULL)
		return (NULL);
	i = 0;
	while (*s)
	{
		s = skip_deli(s, c);
		if (*s == '\0')
			break ;
		len = 0;
		while (s[len] && s[len] != c)
			len++;
		result[i] = ft_substr(s, 0, len);
		if (result[i++] == NULL)
			return (free_result(result, i));
		s += len;
	}
	result[i] = NULL;
	return (result);
}

/*void	free_split(char **result)
{
	int	i;

	i = 0;
	while (result[i])
	{
		free(result[i]);
		i++;
	}
	free(result);
}

int	main(void)
{
	int		i;
	char	**tokens;

	tokens = ft_split("   lorem   ipsum dolor     sit amet,
			consectetur   adipiscing elit. Sed non risus. Suspendisse   ", ' ');
	i = 0;
	while (tokens[i] != NULL)
	{
		printf("Token %d: %s\n", i, tokens[i]);
		i++;
	}
	free_split(tokens);
	return (0);
}
*/
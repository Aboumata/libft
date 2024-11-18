/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboumata <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 22:06:20 by aboumata          #+#    #+#             */
/*   Updated: 2024/11/04 22:06:20 by aboumata         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	if (fd < 0)
		return ;
	if (s == NULL)
		return ;
	write(fd, s, ft_strlen(s));
	write(fd, "\n", 1);
}

// int main ()
// {
// 	char	*str;
//
// 	str = "Abde arrhman Boumata";
// 	ft_putendl_fd(str, 1);
//
// 	ft_putendl_fd("error message", 2);
// }

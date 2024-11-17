/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboumata <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 22:04:36 by aboumata          #+#    #+#             */
/*   Updated: 2024/11/04 22:04:36 by aboumata         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (lst == NULL || del == NULL)
		return ;
	del(lst->content);
	free(lst);
}

/*void del(void *content)
{
	free(content);
}
*/

/*int main()
{
	t_list	*node0;

	node0 = ft_lstnew(ft_strdup("abde"));
	if (node0 == NULL)
	{
		free(node0);
		return(1);
	}
	printf("node0's content => %s\n", (char *)node0->content);
	ft_lstdelone(node0, del);
	printf("deleted");
	return (0);
}
*/
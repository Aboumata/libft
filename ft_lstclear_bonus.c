/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboumata <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 22:04:29 by aboumata          #+#    #+#             */
/*   Updated: 2024/11/04 22:04:29 by aboumata         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*void	del(void *content)
{
	free(content);
}
*/

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*temp;

	if (lst == NULL || *lst == NULL || del == NULL)
		return ;
	while (*lst != NULL)
	{
		temp = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = temp;
	}
	*lst = NULL;
}

/*void print_list(t_list *lst)
{
	while (lst != NULL)
	{
		printf("%s\n",(char *) lst->content);
		lst = lst->next;
	}
}
*/

/*int main()
{
	t_list	*node1;
	t_list	*node2;
	t_list	*node3;

	node1 = ft_lstnew(ft_strdup("Node 1"));
	node2 = ft_lstnew(ft_strdup("Node 2"));
	node3 = ft_lstnew(ft_strdup("Node 3"));
	if (!node1 || !node2 || !node3)
	{
		free(node1);
		free(node2);
		free(node3);
		return (1);
	}
	node1->next = node2;
	node2->next = node3;
	printf("Original list: \n");
	print_list(node1);
	ft_lstclear(&node1, del);
	if (node1 == NULL)
		printf("list is cleaned.");
	else
		printf("failure cleaning.");
	return (0);
}
*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboumata <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 22:04:23 by aboumata          #+#    #+#             */
/*   Updated: 2024/11/04 22:04:23 by aboumata         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (new == NULL || lst == NULL)
		return ;
	new->next = *lst;
	*lst = new;
}

/*void	print_list(t_list *lst)
{
	while (lst != NULL)
	{
		printf("%s\n", (char *)lst->content);
		lst = lst->next;
	}
}
*/

/*int main ()
{
	t_list	*node1;
	t_list	*node2;
	t_list	*node3;
	t_list	*new_node;

	node1 = ft_lstnew(ft_strdup("1"));
	node2 = ft_lstnew(ft_strdup("2"));
	node3 = ft_lstnew(ft_strdup("3"));
	if (!node1 || !node2 || !node3)
	{
		free(node1);
		free(node2);
		free(node3);
		return(1);
	}
	node1->next = node2;
	node2->next = node3;
	printf("Original list: \n");
	print_list(node1);
	new_node = ft_lstnew(ft_strdup("0"));
	if (!new_node)
	{
		ft_lstclear(&node1, free);
		return (1);
	}
	ft_lstadd_front(&node1, new_node);
	printf("\nlist after adding a node in front: \n");
	print_list(node1);
	ft_lstclear(&node1, free);
	return (0);
}
*/
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboumata <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 22:04:15 by aboumata          #+#    #+#             */
/*   Updated: 2024/11/04 22:04:15 by aboumata         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*end;

	if (lst == NULL)
		return ;
	if (*lst == NULL)
		*lst = new;
	else
	{
		end = *lst;
		while (end->next != NULL)
			end = end->next;
		end->next = new;
	}
}

/*void	print_list(t_list *lst)
{
	while (lst)
	{
		printf("%s => ", (char *)lst->content);
		lst = lst->next;
	}
	printf("NULL\n");
}

int main ()
{
	t_list	*node1;
	t_list	*node2;
	t_list	*node3;
	t_list	*head;

	node1 = ft_lstnew(ft_strdup("42"));
	node2 = ft_lstnew(ft_strdup("1337"));
	node3 = ft_lstnew(ft_strdup("55"));
	if (node1 == NULL || node2 == NULL || node3 == NULL)
	{
		free(node1);
		free(node2);
		free(node3);
		return (1);
	}
	head = NULL;
	ft_lstadd_back(&head, node1);
	ft_lstadd_back(&head, node2);
	ft_lstadd_back(&head, node3);
	printf("our list: \n");
	print_list(head);
	ft_lstclear(&head, free);
	return (0);
}
*/
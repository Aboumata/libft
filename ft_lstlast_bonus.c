/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboumata <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 22:04:52 by aboumata          #+#    #+#             */
/*   Updated: 2024/11/04 22:04:52 by aboumata         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (lst == NULL)
		return (NULL);
	while (lst->next != NULL)
	{
		lst = lst->next;
	}
	return (lst);
}

/*void print_last_node(void *lst)
{
	t_list	*last;

	last = ft_lstlast(lst);
	if (last != NULL)
		printf("last node content: %s\n", (char *) last->content);
	else
		printf("Nothing here.");
}
*/

/*int main ()
{
	t_list	*node1;
	t_list	*node2;
	t_list	*node3;

	node1 = ft_lstnew(ft_strdup("node 1"));
	node2 = ft_lstnew(ft_strdup("node 2"));
	node3 = ft_lstnew(ft_strdup("node 3"));
	if (!node1 || !node2 || !node3)
	{
		free(node1);
		free(node2);
		free(node3);
		return (1);
	}
	node1->next = node2;
	node2->next = node3;
	print_last_node(node1);
	ft_lstclear(&node1, free);
}
*/
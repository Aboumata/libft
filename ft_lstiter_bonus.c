/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboumata <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 22:04:43 by aboumata          #+#    #+#             */
/*   Updated: 2024/11/04 22:04:43 by aboumata         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*void f(void *content) {
	char *str = (char *)content;
	while (*str) {
		*str = ft_toupper(*str);
		str++;
	}
}
*/

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (lst == NULL || f == NULL)
		return ;
	while (lst != NULL)
	{
		f(lst->content);
		lst = lst->next;
	}
}

/*void print_content(void *content)
{
	printf("%s\n", (char *)content);
}
*/

/*int main ()
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
	printf("List Contents Before:\n");
	ft_lstiter(node1, print_content);
	ft_lstiter(node1, f);
	printf("\nlist content after uppercase:\n");
	ft_lstiter(node1, print_content);
	ft_lstclear(&node1, free);
	return (0);
}
*/
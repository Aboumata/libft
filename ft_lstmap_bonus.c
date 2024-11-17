/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboumata <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 22:05:01 by aboumata          #+#    #+#             */
/*   Updated: 2024/11/04 22:05:01 by aboumata         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*void *transformer(void *content)
{
	char	*original_cont;
	size_t	len_cont;
	char	*new_cont;

	original_cont = (char *) content;
	len_cont = ft_strlen(content);
	new_cont = (char *) malloc(len_cont + 15);
	if (new_cont == NULL)
		return (NULL);
	ft_strlcpy(new_cont, original_cont, len_cont + 1);
	ft_strlcat(new_cont, " abde arrahman", len_cont + 15);
	return (new_cont);
}
*/

/*void del(void *content)
{
	free(content);
}
*/

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*new_node;
	void	*new_content;

	if (lst == NULL || f == NULL || del == NULL)
		return (NULL);
	new_list = NULL;
	while (lst != NULL)
	{
		new_content = f(lst->content);
		if (new_content == NULL)
		{
			ft_lstclear(&new_list, del);
			return (NULL);
		}
		new_node = ft_lstnew(new_content);
		if (new_node == NULL)
		{
			del(new_content);
			return (ft_lstclear(&new_list, del), NULL);
		}
		ft_lstadd_back(&new_list, new_node);
		lst = lst->next;
	}
	return (new_list);
}

/*void print_list(t_list *lst)
{
	while (lst != NULL)
	{
		printf("%s\n", (char *) lst->content);
		lst = lst->next;
	}
}
*/

/*int main ()
{
	t_list	*node1;
	t_list	*node2;
	t_list	*node3;
	t_list	*new_list;

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
	new_list = ft_lstmap(node1, f, del);
	printf("original:\n");
	print_list(node1);
	printf("\nMapped list:\n");
	print_list(new_list);
	ft_lstclear(&node1, del);
	ft_lstclear(&new_list, del);
	return (0);
}
*/
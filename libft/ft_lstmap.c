/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdorado <mdorado@student.42madrid.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/17 21:20:49 by mdorado           #+#    #+#             */
/*   Updated: 2026/10/17 21:20:51 by mdorado          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_lst;
	t_list	*current_node;
	t_list	*before_node;
	void	*changed_content;

	new_lst = NULL;
	before_node = NULL;
	while (lst && f && del)
	{
		changed_content = f(lst->content);
		current_node = ft_lstnew(changed_content);
		if (!current_node)
		{
			del(changed_content);
			ft_lstclear(&new_lst, del);
			return (NULL);
		}
		if (!new_lst)
			new_lst = current_node;
		if (before_node)
			before_node->next = current_node;
		before_node = current_node;
		lst = lst->next;
	}
	return (new_lst);
}

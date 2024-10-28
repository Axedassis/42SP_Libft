/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsilva-x <lsilva-x@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 17:52:36 by lsilva-x          #+#    #+#             */
/*   Updated: 2024/10/27 21:59:46 by lsilva-x         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

static void	ft_organize(t_list **new, t_list *element, t_list **lst_front)
{
	if (*new == NULL)
	{
		*new = element;
		*lst_front = *new;
	}
	else
	{
		(*new)->next = element;
		*new = (*new)->next;
	}
}

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_element;
	t_list	*lst_new;
	t_list	*lst_front;

	lst_new = NULL;
	new_element = NULL;
	lst_front = NULL;
	if (!lst)
		return (NULL);
	while (lst)
	{
		new_element = ft_lstnew(f(lst->content));
		if (new_element == NULL)
			return (NULL);
		if (!new_element)
		{
			ft_lstclear(&lst_front, del);
			return (NULL);
		}
		ft_organize(&lst_new, new_element, &lst_front);
		lst = lst->next;
	}
	return (lst_front);
}

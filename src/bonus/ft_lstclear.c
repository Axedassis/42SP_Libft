/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsilva-x <lsilva-x@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 17:32:44 by lsilva-x          #+#    #+#             */
/*   Updated: 2024/10/27 21:59:28 by lsilva-x         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*tmp;

	if (*lst == NULL || del == NULL)
		return ;
	tmp = *lst;
	if (tmp->next != NULL)
		ft_lstclear(&tmp->next, del);
	del(tmp->content);
	free(tmp);
	*lst = NULL;
}

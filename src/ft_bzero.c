/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsilva-x <lsilva-x@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 21:13:45 by lsilva-x          #+#    #+#             */
/*   Updated: 2024/10/16 21:42:08 by lsilva-x         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned int	i;
	char			*cptr;

	i = 0;
	if (n == 0)
		return ;
	cptr = (char *)s;
	while (i < n)
	{
		cptr[i] = 0;
		i++;
	}
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsilva-x <lsilva-x@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 19:49:18 by lsilva-x          #+#    #+#             */
/*   Updated: 2024/10/15 21:22:27 by lsilva-x         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t		i;

	i = 0;
	while (i < n)
	{
		if (*(unsigned char *)s == (unsigned char)c)
			return ((void *)s);
		s++;
		i++;
	}
	return ((void *)0);
}
/*
s -> pointer to memory
c -> is what we look for
n -> how many bytes ahead we gonna look up

the memory pointer to s is interpreter as "unsigned char"

retunr a pointer to the match byte or NULL if the character does not occur
in the given memory area.
*/
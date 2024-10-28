/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsilva-x <lsilva-x@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 21:25:55 by lsilva-x          #+#    #+#             */
/*   Updated: 2024/10/15 21:40:51 by lsilva-x         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			index;
	unsigned char	*haystack_s1;
	unsigned char	*haystack_s2;

	index = 0;
	haystack_s1 = (unsigned char *)s1;
	haystack_s2 = (unsigned char *)s2;
	if (n == 0)
		return (0);
	if (haystack_s1[index] != haystack_s2[index])
		return (haystack_s1[index] - haystack_s2[index]);
	while (index < (n - 1))
	{
		if (haystack_s1[index] != haystack_s2[index])
			return (haystack_s1[index] - haystack_s2[index]);
		index++;
	}
	return (haystack_s1[index] - haystack_s2[index]);
}

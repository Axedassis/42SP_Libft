/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsilva-x <lsilva-x@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 21:42:02 by lsilva-x          #+#    #+#             */
/*   Updated: 2024/10/16 18:59:23 by lsilva-x         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	unsigned int		loop;

	loop = 0;
	if (ft_strlen(little) == 0)
		return ((char *)big);
	while (big[loop] != '\0' && loop < len)
	{
		if (big[loop] == little[0] && (ft_strlen(little) + loop) <= len)
		{
			if (ft_strncmp((char *)&big[loop], little, ft_strlen(little)) == 0)
				return ((char *)&big[loop]);
		}
		loop++;
	}
	return ((void *)0);
}

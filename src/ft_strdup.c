/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsilva-x <lsilva-x@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 17:13:42 by lsilva-x          #+#    #+#             */
/*   Updated: 2024/10/17 18:03:42 by lsilva-x         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_strdup(const char *s)
{
	int		str_length;
	char	*str_p;

	str_length = ft_strlen(s);
	str_p = (char *)ft_calloc(str_length + 1, sizeof(char));
	if (!str_p)
		return ((void *)0);
	ft_strlcpy(str_p, s, str_length + 1);
	return (str_p);
}

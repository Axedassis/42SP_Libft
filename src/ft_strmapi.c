/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsilva-x <lsilva-x@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 19:01:39 by lsilva-x          #+#    #+#             */
/*   Updated: 2024/10/22 19:20:36 by lsilva-x         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	tmp;
	char	*s_dup;
	int		i;

	i = 0;
	if (!s || !f)
		return ((char *)s);
	s_dup = ft_strdup(s);
	if (!s_dup)
		return (NULL);
	while (s_dup[i] != '\0')
	{
		tmp = f(i, s_dup[i]);
		s_dup[i] = tmp;
		i++;
	}
	return (s_dup);
}

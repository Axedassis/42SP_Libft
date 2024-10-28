/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsilva-x <lsilva-x@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 00:09:43 by lsilva-x          #+#    #+#             */
/*   Updated: 2024/10/22 15:42:40 by lsilva-x         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t		length_s1;
	size_t		length_s2;
	char		*strjoin;

	if (!s1 || !s2)
		return (NULL);
	length_s1 = ft_strlen(s1);
	length_s2 = ft_strlen(s2);
	strjoin = (char *)malloc((length_s1 + length_s2 + 1) * sizeof(char));
	if (!strjoin)
		return (NULL);
	ft_strlcpy(strjoin, s1, length_s1 + 1);
	ft_strlcpy(strjoin + length_s1, s2, length_s2 + 1);
	return (strjoin);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsilva-x <lsilva-x@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 20:13:03 by lsilva-x          #+#    #+#             */
/*   Updated: 2024/10/19 22:31:15 by lsilva-x         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

static int	ft_wordcount(char *string, char delimiter)
{
	int		wc;
	int		word;

	wc = 0;
	word = 0;
	while (*string)
	{
		if (*string != delimiter && word == 0)
		{
			word = 1;
			wc++;
		}
		else if (*string == delimiter)
			word = 0;
		string++;
	}
	return (wc);
}

static char	*ft_wordpointer(char *string, char delimiter)
{
	char	*n_haystack;
	char	*substr;

	substr = NULL;
	n_haystack = ft_strchr(string + 1, delimiter);
	if (!n_haystack)
		return (NULL);
	substr = ft_substr((char const *)string, 0, (n_haystack - string));
	return (substr);
}

char	**ft_split(char const *s, char c)
{
	int		wc;
	char	**split;
	char	*start;
	char	*end;
	int		i;

	i = 0;
	wc = ft_wordcount((char *)s, c);
	split = (char **)malloc((wc + 1) * sizeof(char *));
	if (!split)
		return (NULL);
	start = (char *)s;
	while (i < wc)
	{
		while (*start == c)
			start++;
		end = start;
		while (*end && *end != c)
			end++;
		split[i] = ft_wordpointer(start, *end);
		start = end;
		i++;
	}
	split[i] = NULL;
	return (split);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsilva-x <lsilva-x@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 15:43:07 by lsilva-x          #+#    #+#             */
/*   Updated: 2024/10/22 18:50:24 by lsilva-x         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

static void	ft_node(int *word_count, int n_cpy)
{
	while (n_cpy > 0)
	{
		n_cpy /= 10;
		(*word_count)++;
	}
}

static char	*ft_str_size(int n)
{
	int		n_cpy;
	int		word_count;
	char	*str;

	n_cpy = n;
	word_count = 0;
	if (n_cpy < 0)
		n_cpy = -(n_cpy);
	ft_node(&word_count, n_cpy);
	n_cpy = 1;
	if (n < 0)
		n_cpy = 2;
	str = (char *)malloc((word_count + n_cpy) * sizeof(char));
	if (str == NULL)
		return (NULL);
	if (n < 0)
	{
		str[word_count] = '-';
		str[word_count + 1] = '\0';
		return (str);
	}
	str[word_count] = '\0';
	return (str);
}

static void	ft_flip(char *itoa)
{
	size_t	itoa_length;
	size_t	index;
	char	tmp;

	itoa_length = ft_strlen(itoa) - 1;
	index = 0;
	while (itoa_length > index)
	{
		tmp = itoa[itoa_length];
		itoa[itoa_length] = itoa[index];
		itoa[index] = tmp;
		itoa_length--;
		index++;
	}
}

char	*ft_itoa(int n)
{
	char	*itoa;
	int		index;
	int		n_cpy;

	index = 0;
	if (n == 0)
		return (ft_strdup("0"));
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	n_cpy = n;
	if (n_cpy < 0)
		n_cpy = -(n_cpy);
	itoa = ft_str_size(n);
	if (itoa == NULL)
		return (NULL);
	while (n_cpy != 0)
	{
		itoa[index] = (unsigned char)((n_cpy % 10) + '0');
		n_cpy /= 10;
		index++;
	}
	ft_flip(itoa);
	return (itoa);
}

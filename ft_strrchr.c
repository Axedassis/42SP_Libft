/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsilva-x <lsilva-x@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 18:27:35 by lsilva-x          #+#    #+#             */
/*   Updated: 2024/10/15 18:33:52 by lsilva-x         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *s, int c)
{
	unsigned char	uc;
	int				index;
	char			*final_index;

	uc = (unsigned char)c;
	index = 0;
	final_index = (void *)0;
	while (s[index] != '\0')
	{
		if (s[index] == uc)
			final_index = (char *)&s[index];
		index++;
	}
	if (s[index] == uc)
		return ((char *)&s[index]);
	return (final_index);
}

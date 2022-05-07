/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagarcia <lagarcia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 17:06:17 by lagarcia          #+#    #+#             */
/*   Updated: 2022/05/04 12:50:04 by lagarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_minlen(size_t a, size_t b)
{
	if (a > b)
	{
		return (b);
	}
	return (a);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*dest;
	size_t	i;
	size_t	lenstr;

	if (!s)
		return (NULL);
	lenstr = ft_minlen(ft_strlen(s), len);
	if (start > ft_strlen(s))
		return (ft_strdup(""));
	dest = malloc((lenstr + 1) * sizeof(char));
	if (!dest)
		return (NULL);
	i = 0;
	while (i < lenstr)
	{
		dest[i] = s[start + i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

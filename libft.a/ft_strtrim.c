/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagarcia <lagarcia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 15:28:28 by lagarcia          #+#    #+#             */
/*   Updated: 2022/04/29 17:05:55 by lagarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	len;
	char	*trim;

	if (!s1 || !set)
	{
		return (0);
	}
	while (*s1 != '\0' && ft_strchr(set, *s1))
	{
		s1++;
	}
	len = ft_strlen(s1);
	while (len != '\0' && ft_strchr(set, s1[len]))
	{
		len--;
	}
	trim = ft_substr(s1, 0, len + 1);
	return (trim);
}

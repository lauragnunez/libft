/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagarcia <lagarcia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 15:12:16 by lagarcia          #+#    #+#             */
/*   Updated: 2022/04/29 13:09:04 by lagarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	size_dst;
	unsigned int	size_src;

	i = 0;
	j = 0;
	while (dst[j] != '\0')
	{
		j++;
	}
	size_dst = j;
	size_src = ft_strlen(src);
	if ((dstsize == 0) || (dstsize <= size_dst))
		return (size_src + dstsize);
	while (src[i] != '\0' && i < dstsize - size_dst - 1)
	{
		dst[j] = src[i];
		i++;
		j++;
	}
	dst[j] = '\0';
	return (size_dst + size_src);
}

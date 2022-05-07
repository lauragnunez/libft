/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagarcia <lagarcia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/22 12:11:23 by lagarcia          #+#    #+#             */
/*   Updated: 2022/04/29 12:21:40 by lagarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	unsigned char	*str2;
	unsigned char	letter;
	size_t			i;

	str2 = (unsigned char *)str;
	letter = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		if (*str2 == letter)
		{
			return (str2);
		}
		str2++;
		i++;
	}
	return (0);
}

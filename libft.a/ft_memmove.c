/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagarcia <lagarcia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 13:08:38 by lagarcia          #+#    #+#             */
/*   Updated: 2022/04/29 12:22:44 by lagarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t count)
{
	char	*a;
	char	*b;

	a = (char *)src;
	b = (char *)dest;
	if (a < b)
	{
		while (count--)
		{
			b[count] = a[count];
		}
	}
	else
	{
		ft_memcpy(b, a, count);
	}
	return (dest);
}

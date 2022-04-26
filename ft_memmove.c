/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagarcia <lagarcia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 13:08:38 by lagarcia          #+#    #+#             */
/*   Updated: 2022/04/21 17:27:06 by lagarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	if (dest == 0 || src == 0)
	{
		return (0);
	}
	while (i < n)
	{
		*(char *)(dest + i) = *(char *)(src + i);
		i++;
	}
	return (dest);
}

void	*ft_memmove(void *dest, const void *src, size_t count)
{
	char *a;
	char *b;

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

int	main(void)
{
	char		dest[] = "oldstring";
	const char	src[] = "newstring";

	printf("Before memmove dest = %s, src = %s\n", dest, src);
	ft_memmove(dest, src, 9);
	printf("After memmove dest = %s, src = %s\n", dest, src);
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagarcia <lagarcia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 12:32:42 by lagarcia          #+#    #+#             */
/*   Updated: 2022/04/21 17:26:38 by lagarcia         ###   ########.fr       */
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

int	main(void)
{
	char	src[] = "Helloworld";
	char	dest[13];

	ft_memcpy(dest, src, 6);
	printf("dest after first memcpy() => %s\n", dest);
	ft_memcpy(dest + sizeof(src) - 1, " world!", 8);
	printf("dest after second memcpy() => %s\n", dest);
	return (0);
}

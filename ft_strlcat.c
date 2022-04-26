/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagarcia <lagarcia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 15:12:16 by lagarcia          #+#    #+#             */
/*   Updated: 2022/04/21 18:46:57 by lagarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str)
{
	int	cad;

	cad = 0;
	while (str[cad] != '\0')
	{
		cad++;
	}
	return (cad);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	size_dest;
	unsigned int	size_src;

	i = 0;
	j = 0;
	while (dest[j] != '\0')
	{
		j++;
	}
	size_dest = j;
	size_src = ft_strlen(src);
	if ((size == 0) || (size <= size_dest))
		return (size_src + size);
	while (src[i] != '\0' && i < size - size_dest - 1)
	{
		dest[j] = src[i];
		i++;
		j++;
	}
	dest[j] = '\0';
	return (size_dest + size_src);
}

int	main(void)
{
	char dest[15] = "Mundo 42";
	char src[] = "Hola";
	int size = 10;

	printf("El string es: %d\n", ft_strlcat(dest, src, size));
	printf("El string es: %s", dest);
	return (0);
}

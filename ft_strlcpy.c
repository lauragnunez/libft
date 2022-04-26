/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagarcia <lagarcia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 13:29:26 by lagarcia          #+#    #+#             */
/*   Updated: 2022/04/21 17:54:32 by lagarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	count;
	unsigned int	i;

	count = 0;
	while (src[count] != '\0')
	{
		count++;
	}
	i = 0;
	if (size != 0)
	{
		while (src[i] != '\0' && i < (size - 1))
		{
			dest[i] = src[i];
			i++;
		}
	dest[i] = '\0';
	}
	return (count);
}

int	main(void)
{
	char	dest[20];
	char	*src;

	src = "Hola Mundo Hola";
	printf("%d", ft_strlcpy(dest, src, 4));
	printf(" ");
	printf("%s", dest);
	return (0);
}

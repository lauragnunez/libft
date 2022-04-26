/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagarcia <lagarcia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 18:05:31 by lagarcia          #+#    #+#             */
/*   Updated: 2022/04/21 16:50:03 by lagarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*ft_memset(void *str, int a, size_t len)
{
	size_t	i;

	i = 0;
	while (i < len)
	{
		((unsigned char *)str)[i] = a;
		i++;
	}
	return (str);
}

int	main(void)
{
	char	buffer[] = "we are doing a test";

	printf("%s\n", buffer);
	ft_memset(buffer, '*', 6);
	printf("%s\n", buffer);
}

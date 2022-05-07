/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagarcia <lagarcia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 18:05:31 by lagarcia          #+#    #+#             */
/*   Updated: 2022/04/29 12:56:48 by lagarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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

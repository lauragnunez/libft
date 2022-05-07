/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagarcia <lagarcia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 11:01:45 by lagarcia          #+#    #+#             */
/*   Updated: 2022/04/29 13:25:37 by lagarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *str1, const void *str2, size_t n)
{
	const unsigned char	*string1;
	const unsigned char	*string2;

	if (str1 == str2 || n == 0)
	{
		return (0);
	}
	string1 = (const unsigned char *)str1;
	string2 = (const unsigned char *)str2;
	while (n--)
	{
		if (*string1 != *string2)
		{
			return (*string1 - *string2);
		}
		if (n)
		{
			string1++;
			string2++;
		}
	}
	return (0);
}

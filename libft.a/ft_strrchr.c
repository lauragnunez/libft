/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagarcia <lagarcia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 15:50:36 by lagarcia          #+#    #+#             */
/*   Updated: 2022/04/29 13:24:35 by lagarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*str2;
	size_t	lenght;
	int		i;

	str2 = (char *)s;
	i = 0;
	lenght = ft_strlen(str2);
	while (i < (int)lenght)
	{
		i++;
		str2++;
	}
	while (i >= 0)
	{
		if (str2[0] == (char)c)
		{
			return (str2);
		}
		i--;
		str2--;
	}
	return (0);
}

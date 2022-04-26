/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagarcia <lagarcia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 15:39:26 by lagarcia          #+#    #+#             */
/*   Updated: 2022/04/20 15:52:11 by lagarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strchr(const char *str, int c)
{
	char	*str2;

	str2 = (char *)str;
	if (str2)
	{
		while (*str2)
		{
			if ((char)c == *str2)
			{
				return (str2);
			}
			str2++;
		}
		if ((char)c == 0)
		{
			return (str2);
		}
	}
	return (0);
}

int	main(void)
{
    const char str[] = "holamundo";
    const char ch = 'm';
    char *ret;

    ret = ft_strchr(str, ch);
    printf("String after |%c| is - |%s|\n", ch, ret);
    return(0);
}

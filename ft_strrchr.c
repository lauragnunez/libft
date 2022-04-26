/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagarcia <lagarcia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 15:50:36 by lagarcia          #+#    #+#             */
/*   Updated: 2022/04/20 16:08:30 by lagarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strrchr(const char *str, int c)
{
	char *str2;
	size_t lenght;
	int i;

	str2 = (char *)str;
	i = 0;
	if (str2)
	{
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
	}
    return (0);
}

int	main(void)
{
    const char str[] = "holamundoheyworld";
    const char ch = 'o';
    char *ret;

    ret = ft_strrchr(str, ch);
    printf("String after |%c| is - |%s|\n", ch, ret);
    return(0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagarcia <lagarcia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 16:11:36 by lagarcia          #+#    #+#             */
/*   Updated: 2022/04/21 10:35:38 by lagarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strnstr(const char *str, const char *to_find, size_t n)
{
	size_t	i;
	size_t	j;
	size_t	n2;
	char	*str2;

	i = 0;
	str2 = (char *)str;
	n2 = ft_strlen(to_find);
	if (n2 == 0 || str == to_find)
	{
		return (str2);
	}
	while (str2[i] != '\0' && i < n)
	{
		j = 0;
		while (str2[i + j] != '\0' && to_find[j] != '\0' && str2[i + j] == to_find[j] && i + j < n)
		{
			j++;
		}
		if (i == n2)
		{
			return (str2 + i);
		}
		i++;
	}
	return (0);
}


int main()
{
    char    *s1 = "MZIRIBMZIRIBMZE123";
    char    *s2 = "MZIRIBMZE";
    size_t  max = ft_strlen(s2);

    char    *i1 = strnstr(s1, s2, max);
    char    *i2 = ft_strnstr(s1, s2, max);


    printf("strnstr: %s\nft_strnstr: %s\n", i1,i2);
    return 0;
}

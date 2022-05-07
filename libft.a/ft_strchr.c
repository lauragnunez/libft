/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagarcia <lagarcia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 15:39:26 by lagarcia          #+#    #+#             */
/*   Updated: 2022/04/29 12:23:00 by lagarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *str, int c)
{
	char	*str2;

	str2 = (char *)str;
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
	return (0);
}

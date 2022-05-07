/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagarcia <lagarcia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 13:05:54 by lagarcia          #+#    #+#             */
/*   Updated: 2022/05/03 17:41:11 by lagarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_numlen(long n)
{
	int	i;

	i = 0;
	if (n <= 0)
		i++;
	while (n != 0)
	{
		i++;
		n /= 10;
	}
	return (i);
}

char	*ft_itoa(int nb)
{
	char	*str;
	int		i;
	long	n;

	n = (long)nb;
	i = ft_numlen(n);
	str = malloc(sizeof(char) * (i + 1));
	if (!str)
		return (NULL);
	str[i] = '\0';
	if (n < 0)
	{
		str[0] = '-';
		n *= -1;
	}
	else if (n == 0)
		str[0] = '0';
	while (n != 0)
	{
		i--;
		str[i] = (n % 10) + '0';
		n /= 10;
	}
	return (str);
}

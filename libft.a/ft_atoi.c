/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagarcia <lagarcia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 10:07:09 by lagarcia          #+#    #+#             */
/*   Updated: 2022/04/29 13:53:44 by lagarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <limits.h>
#include <stdlib.h>
#include <string.h>

static int	ft_isspace(char *str)
{
	int	i;

	i = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
		i++;
	return (i);
}

int	ft_atoi(const char *str)
{
	int	i;
	int	j;
	int	result;

	i = 0;
	j = 1;
	result = 0;
	i = ft_isspace((char *)str);
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			j *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = (str[i] - '0') + (result * 10);
		i++;
	}
	result *= j;
	if (j > 0 && result < 0)
		return (-1);
	if (j < 0 && result > 0)
		return (0);
	return (result);
}
